int led=2;

void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
  Serial.println(led);
  delay(500);
}
