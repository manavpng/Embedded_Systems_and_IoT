int gas =A0;
int buzz=2;

void setup() 
{
  pinMode(gas,INPUT);
  pinMode(buzz,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int x= analogRead(gas);
  Serial.print("Gas sensor data=");
  Serial.println(x);
  delay(500);
  if (x>200)
  {
    Serial.println("Bewda hai");
    digitalWrite(buzz,HIGH);
    delay(500);
    digitalWrite(buzz,LOW);
    delay(500);
  }
  else
  {
    Serial.println("Sant aadmi hai");
    delay(500);
  }
}
