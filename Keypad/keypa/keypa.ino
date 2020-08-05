/* @file HelloKeypad.pde
|| @version 1.0
|| @author Alexander Brevig
|| @contact alexanderbrevig@gmail.com
||
|| @description
|| | Demonstrates the simplest use of the matrix Keypad library.
|| #
*/
#include <Keypad.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(5,6,7,9,10,13);
int flag =0;
int x,y,z,w,r,f,t,s,p;
int relay1 = 12;
int relay2 = 11;
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
float l =0,k=0;
char keys[ROWS][COLS] = {
  {'1','2','3','C'},
  {'4','5','6','L'},
  {'7','8','9','M'},
  {'.','0','#','E'}
};
byte rowPins[ROWS] = {A5,A4,A3,A2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {A1,A0,2,3}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter the");
  lcd.setCursor(0,1);
  lcd.print("password");
} 
void loop()
{
  
  char key = keypad.getKey();
 
  
  if(key == '5' || key == '6'|| key == '7' || key == '8' || key == '9' )
  {
    t=1;
  }
  else if(key=='1')
  {
    lcd.clear();
    x=1;
    r=1;
    delay(10);
    lcd.print("Next Digit");
    Serial.println(key);
  }
  else if(key=='2' && r==1)
  {
    lcd.clear();
    y=1;
    delay(10);
    Serial.println(key);
    lcd.print("Next Digit");
    f=1;
    r=0;
  }
  else if(key=='3'&& f==1)
  {
    lcd.clear();
    z=1;
    delay(10);
    Serial.println(key);
    lcd.print("Next Digit");
  }
  else if(t==1 && key=='E')
  {
    lcd.clear();
    
    lcd.print("Wrong Password");
    t=0;
    delay(1000);
    display();
    
  }
  else if(x==1 && y==1 && z==1 && key=='E')
  {
    lcd.clear();
    l=1;
    Serial.println("Password Correct");
    lcd.print("Password Correct");
    x=0;y=0;z=0;
  } 
  else if(key=='M' && l==1)
  {
    lcd.clear();
    lcd.print("Appliance 1 On");
    digitalWrite(relay1,HIGH);
    Serial.println("Appliance 1 On");
    p=1;
  }
  else if(key=='0' && l==1 && p==1)
  {
    lcd.clear();    
    digitalWrite(relay1,LOW);
    Serial.println("Appliance Off");   
    lcd.print("Appliance 1 Off");
    p=0;
  }
  else if(key=='.' && l==1)
  {
    lcd.clear();
    lcd.print("Appliance 2 On");
    digitalWrite(relay2,HIGH);
    
    s=1;
  }
  else if(key=='#' && l==1 && s==1)
  {
    lcd.clear();
    s=0;
    digitalWrite(relay2,LOW);
    lcd.print("Appliance 2 Off");   
  }  
  else if(key == 'C' && l==1 )
  {
    lcd.print("Sign Out");
    l=0;
    display();
  }
}
void display()
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter the");
  lcd.setCursor(0,1);
  lcd.print("password");
  loop();
  
} 
  
  
  
  /*if(key == 'L'){
  Serial.println("Enter Upper Limit");
  flag =1 ;
  }
  else if( key > '0' && flag == 1)
  {
    l =key-'0'; // l is upper limit
    Serial.println(l);   
    flag=0; 
    
  }
  else if(key == 'M'){
  Serial.println("Enter Lower Limit");
  flag =2 ;
  }
  
  else if( key > '0' && flag == 2)
  {
    k =key-'0'; // l is upper limit
    Serial.println(k);   
    flag=0; 
    
  }
  else if(key == 'E')
  {
    Serial.print("Value of Upper Limit is " );
    Serial.println(l);
    Serial.print("Value of Lower Limit is " );
    Serial.println(k);
    
  }
  else if(key == 'C')
  {
    l=0;
    k=0;
    Serial.println("Values are Cleared");
  }
  
 */

