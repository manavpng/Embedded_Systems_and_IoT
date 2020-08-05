#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
void setup()
{
  lcd.begin(16,2);
}

void loop()
{
 
    lcd.setCursor(0,0);
    lcd.print("Vision");
    delay(1000);
    lcd.clear();
    lcd.setCursor(1,1);
    lcd.print("ke");
    delay(540);
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Himanshu");
    delay(540);
    lcd.clear();
    lcd.setCursor(3,1);
    lcd.print("Sir");
    delay(540);
    lcd.clear();
    lcd.setCursor(4,0);
    lcd.print("ki");
    delay(540);
    lcd.clear();
    lcd.setCursor(5,1);
    lcd.print("Gaadi ko");
    delay(540);
    lcd.clear();
    lcd.setCursor(6,0);
    lcd.print("kisi");
    delay(540);
    lcd.clear();
    lcd.setCursor(7,1);
    lcd.print("car");
    delay(540);
    lcd.clear();
    lcd.setCursor(8,0);
    lcd.print("Waale");
    delay(540);
    lcd.clear();
    lcd.setCursor(9,1);
    lcd.print("Ne");
    delay(540);
    lcd.clear();
    lcd.setCursor(10,0);
    lcd.print("thoka");
    delay(540);
    lcd.clear();
    lcd.setCursor(11,1);
    lcd.print("...");
    delay(540);
    lcd.clear();
    lcd.setCursor(12,0);
    lcd.print("...");
    delay(540);
    lcd.clear();
    lcd.setCursor(13,1);
    lcd.print("...");
    delay(540);
    lcd.clear();

}
