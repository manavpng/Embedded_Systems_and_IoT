#include<LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
int x;
int y;
void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  for(x=0;x<15;x++)
  {
    for(y=0;y<3;y++)
    {delay(500);
    lcd.setCursor(x,y);
    lcd.print("Vision");
    delay(500);
    lcd.clear();
  }
}
}
