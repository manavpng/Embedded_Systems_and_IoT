int sw=2;
int led=8;

void setup() 
{
  pinMode(sw,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{
  int state = digitalRead(sw);
  Serial.println(state);
  if (state==HIGH)
  {
    digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
  }
  else
  {
    digitalWrite(led,LOW);
   
  }
  /*digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);*/
}
