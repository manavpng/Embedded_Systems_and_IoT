int pir=2;
int buzz=3;
void setup()
{ 
  pinMode(pir,INPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int state=digitalRead(pir);
  if (state==HIGH)
  {
    digitalWrite(buzz,HIGH);
    Serial.print(buzz);
    delay(1000);
  }
  else
  {
    digitalWrite(buzz,LOW);
    delay(1000);
  }
  
}
