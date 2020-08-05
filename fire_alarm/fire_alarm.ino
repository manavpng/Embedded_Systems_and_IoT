#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
int ln=A0;
int pump=2;
void setup()
{
  pinMode(ln,INPUT);
  pinMode(pump,OUTPUT);
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop()
{
  int x= analogRead(ln);
  float y=(x/1023.0)*5000;
  float temp=y/10;
  Serial.println(temp);
  lcd.setCursor(1,0);
  lcd.print("Temperature");
  delay(1000);
  lcd.setCursor(5,1);
  lcd.print(temp);
  delay(100);
  if (temp>36)
  {
    digitalWrite(pump,HIGH);
  }
  else
  {
    digitalWrite(pump,LOW);
  }

}

