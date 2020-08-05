int relay=2;

void setup() 
{
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(relay,HIGH);
  delay(1000);
  digitalWrite(relay,LOW);
  delay(1000);
  Serial.println(relay);
  delay(100);
}
