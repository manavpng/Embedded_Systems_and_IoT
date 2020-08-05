int trig=9;
int echo=8;
long t;
long distance;
int motor1=10;
int motor2=11;

void setup()
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
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
  Serial.println(distance);
  delay(100);
  
  if(distance<10)
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor2,LOW);
    
  }
  else
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
  }
}
