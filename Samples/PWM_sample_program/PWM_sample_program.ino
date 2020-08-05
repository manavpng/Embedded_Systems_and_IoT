int led=3;

void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int x=0;
  for(x=0;x<255;x++)
  {
    analogWrite(led,x);
    delay(20);
    Serial.println(x);
  }
}
