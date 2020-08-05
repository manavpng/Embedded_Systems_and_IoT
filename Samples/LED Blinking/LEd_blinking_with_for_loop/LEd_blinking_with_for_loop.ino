int a=9;
int b=10;
int c=11;
int x;
int y;
void setup()
{
  for(x=9;x<12;x++)
  {
    pinMode(x,OUTPUT);
  }
}
void loop()
{
  for(y=9;y<12;y++)
  {
    digitalWrite(y,HIGH);
    delay(500);
    digitalWrite(y,LOW);
    delay(100);
  }
}
