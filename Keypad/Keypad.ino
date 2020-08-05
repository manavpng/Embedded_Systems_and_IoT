#include<Keypad.h>
int x;
int a =0;
int b =0;
int c =0;
int d =0;
int led =13; 
const byte ROWS=4;
const byte COLS=4;
//String password;
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#',' '}  
};
byte rowPins[ROWS]={5,4,3,2}; //r1=5,r2=4,r3=3,r2=4(from left to right)
byte colPins[COLS]={9,8,7,6}; //c1=6,c2=7,c3=8,c4=9(from right to left)

Keypad keypad=Keypad( makeKeymap(keys),rowPins, colPins,ROWS, COLS);

  
void setup() 
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  //password="";
}

void loop() 
{
  char key=keypad.getKey();
  //password=password+key; //ye characters ko add karta jaega 
  Serial.println(key);
  delay(500);
 // password="";
 if(key>0)
  {
    //Serial.println(key);
    delay(100);
    //password="";
    if(key=='2')
    {
      a=1;
    }
    else if(key=='3')
    {
      b= 1;
    }
    else if(key=='4')
    {
      c= 1;
    }
    else if(key=='5')
    {
      d= 1;
      Serial.println("press D to enter");
      delay(500);
    }
    else if (a==1 && b==1 && c==1 && d==1)
    {
      Serial.println("Password Accepted");
      digitalWrite(led,HIGH);
      a=0;b=0;c=0;d=0;
    }
  }
}
