int wd=A0;
int led =8;

void setup()
{
  pinMode(wd,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int x=analogRead(wd);
  Serial.println(x);
 delay(100); 
 
  if (x<900)
  {
    digitalWrite(led,HIGH);
    delay(1000);
  }
  
  else
  {
    digitalWrite(led,LOW);
  }
}
