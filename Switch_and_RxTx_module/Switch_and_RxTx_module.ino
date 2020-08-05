int ldr=2;
int led=8;

void setup() 
{
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{
  int state = digitalRead(ldr);
  Serial.println(state);
  if (state==HIGH)
  {
    digitalWrite(led,HIGH);
  delay(500);
  
  }
  else
  {
    digitalWrite(led,LOW);
    delay(500);
   
  }
  /*digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);*/
}
