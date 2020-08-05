#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
char x;
int y;
int led = 3;
int led1 = 4;
String code;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  code = "";
}


void loop()
{
  while (Serial.available() > 0)
  {
    x = Serial.read();
    code = code + x ;
  }
  
  Serial.println(code);
  delay(200);
  code= "";
  /*lcd.setCursor(0,0);
  lcd.print("Sent Data=");
  lcd.setCursor(2,1);
  lcd.print(code);
  delay(100);*/
  //lcd.clear();


}
