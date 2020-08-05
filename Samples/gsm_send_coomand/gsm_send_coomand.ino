#include<LiquidCrystal.h>
#include<Wire.h>

#define light1 10
#define light2 11
#define TV 12

int temp4=0;

LiquidCrystal lcd(7,6,5,4,3,2);
int lenth,lenth1,i=0,temp=0;

String str="";
String name="";
String number="";

String TV_ON="TV ON";
String TV_OFF="TV OFF";
String LIGHT1_ON="light 1 ON";
String LIGHT1_OFF="light 1 OFF";
String LIGHT2_ON="light 2 ON";
String LIGHT2_OFF="light 2 OFF";


void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
   pinMode(light1, OUTPUT);
    pinMode(light2, OUTPUT);
     pinMode(TV, OUTPUT);

  lcd.setCursor(0,0);
  lcd.print("GSM Based Home/ ");
  lcd.setCursor(0,1);
  lcd.print("Office Aplliance");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("    Control     ");
  delay(2000); 
  lcd.setCursor(0,0);
  lcd.setCursor(0,1);
  lcd.print("VISION");
  delay(1000);
  Serial.println("AT+CNMI=2,2,0,0,0");
  Serial.println("AT+CMGF=1");
  delay(1000);
  lcd.clear();
}

void loop()
{

   while(temp!=0)
   {
    i=0;
    while(i<lenth)
    {
     if(str[i]=='"')
     {
       temp4++;
     }


     if(temp4==1)
     {
       for(int j=0;j<15;j++)

       {
         number+=str[i];
         i++;
       }
       temp4=2;
     }
     if(str[i]=='*')
     {
      i++; 
      while(str[i]!='#')
      {
       name+=str[i];
       i++;
      }
     }
     i++;
    }


    chack();
   // lcd.setCursor(13,0);
   // lcd.print(name);
   // lcd.setCursor(0,1);
   // Serial.println(name);
   // Serial.println(number);
    //Serial.print("AT+CMGS=");
  //  Serial.println(number);
    delay(2000);

    temp=0;
    temp4=0;
    name="";
    lenth=0;
    str="";
    number="";
    delay(1000);
   }
    lcd.setCursor(0,1);
     lcd.print("System Ready");

    delay(400);
}

 void serialEvent() 
{
  while (Serial.available()) 
  {
    char inChar = (char)Serial.read(); 
    str+=inChar;
     lenth++;
    if (inChar == '\n')
    {      temp=1;  
      inChar=0;     
}   
}
}
void chack()
{
   if(name == TV_ON)
    {
      digitalWrite(TV, HIGH);
      Serial.println("AT+CMGF=1");
      delay(1);
      Serial.print("AT+CMGS=");
      Serial.println(number);
      delay(1);
      Serial.print("TV ON");
      Serial.write(26);
     lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("TV ON");
      delay(2000);
    }

    if (name == TV_OFF)
    {
      digitalWrite(TV,LOW);
      Serial.println("AT+CMGF=1");
      delay(1);
      Serial.print("AT+CMGS=");
      Serial.println(number);
      delay(1);
      Serial.print("TV OFF");
      Serial.write(26); 
    lcd.clear();  
      lcd.setCursor(0,0);
      lcd.print("TV OFF");
      delay(2000);

    }

      if (name == LIGHT1_ON)
    {
      digitalWrite(light1,HIGH);
      Serial.println("AT+CMGF=1");
      delay(1);
     Serial.print("AT+CMGS=");
      Serial.println(number);
      delay(1);
      Serial.print("LIGHT 1 ON");
      Serial.write(26);   
      lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("LIGHT  1 ON");
      delay(2000);

    }

      if (name == LIGHT1_OFF)
    {
      digitalWrite(light1,LOW);
      Serial.println("AT+CMGF=1");
      delay(1);
      Serial.print("AT+CMGS=");
      Serial.println(number);
      delay(1);
      Serial.print("LIGHT 1 OFF");
      Serial.write(26); 

      lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("LIGHT 1 OFF");
      delay(2000);
    }
      if (name == LIGHT2_ON)
    {
      digitalWrite(light2,HIGH);
      Serial.println("AT+CMGF=1");
      delay(1);
     Serial.print("AT+CMGS=");
      Serial.println(number);
      delay(1);
      Serial.print("LIGHT 2 ON");

      Serial.write(26);   
      lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("LIGHT 2 ON");
      delay(2000);
    }


      if (name == LIGHT2_OFF)
    {
      digitalWrite(light2,LOW);
      Serial.println("AT+CMGF=1");
      delay(1);
      Serial.print("AT+CMGS=");
      Serial.println(number);
      delay(1);
      Serial.print("LIGHT 2 OFF");
      Serial.write(26);   
      lcd.clear(); 
      lcd.setCursor(0,0);
      lcd.print("LIGHT 2 OFF");
      delay(2000);
    }    
}
