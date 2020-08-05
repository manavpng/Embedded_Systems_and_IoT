int echo=6;
int trig=7;
long distance;
long samay;

void setup() 
{
   pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
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
  Serial.print("distance is=");
  Serial.println(distance);
  Serial.println("*****");
}
