int sw=8;
int rl=2;
void setup() {
pinMode(sw,INPUT);
pinMode(rl,OUTPUT);
}

void loop() {
  int state= digitalRead(sw);
  if(state==HIGH)
  {
    digitalWrite(rl,HIGH);
  }
else
{
  digitalWrite(rl,LOW);
}
}
