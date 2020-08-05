#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
int trig1=2;
int trig2=3;
int echo1=4;
int echo2=5;
long t1;
long t2;
long distance1;
long distance2;
int pir=6;
int buzz=7;

void setup()
{
  pinMode(echo1,INPUT);
  pinMode(echo2,INPUT);
  pinMode(trig1,OUTPUT);
  pinMode(trig2,OUTPUT);
  pinMode(pir,INPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig1,LOW);
  digitalWrite(trig2,LOW);
  delayMicroseconds(2);
  digitalWrite(trig1,HIGH);
  digitalWrite(trig2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1,LOW);
  digitalWrite(trig2,LOW);
  delayMicroseconds(2);
  
  t1=pulseIn(echo1,HIGH);
  distance1=t1/29/2;
  t2=pulseIn(echo2,HIGH);
  distance2=t2/29/2;
  Serial.println(distance1);
  delay(500);
  Serial.println(distance2);
  delay(500);
int state= digitalRead(pir); 
if (distance1<10 && distance2>10 && state==LOW)
{
  lcd.setCursor(5,0);
  lcd.print("Welcome");
  delay(1000);
  lcd.clear();
}




else if (distance2<10&& distance1>10 && state==HIGH)
{
   lcd.setCursor(0,0);
  lcd.print("Thanks for visiting");
  delay(1000);
  lcd.clear();
   
  digitalWrite(buzz,HIGH);
  delay(1000);
}
else
{
  lcd.setCursor(1,0);
  lcd.print("Sharma Ji ka GHAR");
  delay(1000);
  lcd.clear();
  
  digitalWrite(buzz,LOW);
  delay(1000);
}
  

}
  
  
