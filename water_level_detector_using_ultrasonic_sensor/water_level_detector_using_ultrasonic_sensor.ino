int trig=9;
int echo=8;
long t;
long distance;
int pump=3;

void setup()
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(pump,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  t= pulseIn(echo,HIGH);
  distance=t/29/2;
  Serial.print("Water level=");
  Serial.println(distance);
  delay(100);
  
  if(distance>100)
  {
    digitalWrite(pump,HIGH);
    delay(10000);
  }
  else
  {
    digitalWrite(pump,LOW);
  }
}
