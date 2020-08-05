int trig=2;
int echo=3;
int buzz=4;
long distance;
long samay;


void setup() 
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(buzz,OUTPUT);
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
  samay=pulseIn(echo,HIGH);
  distance=samay/29/2;
  Serial.print("Distance is=");
  Serial.println(distance);

  if(distance<10)
  {
    digitalWrite(buzz,HIGH);
    delay(500);
    digitalWrite(buzz,LOW);
    delay(500);
  }
  else
  {
    digitalWrite(buzz,LOW);
  }
}
