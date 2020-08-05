int trig=2;
int echo=3;
int led1=4;
int led2=5;
int led3=6;
long distance;
long samay;

void setup() 
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
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
    digitalWrite(led1,HIGH);
    digitalWrite(led1,HIGH);
    digitalWrite(led1,HIGH);
    Serial.println("Tank is full");
   }
   else if(distance<100 && distance>10)
   {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
   }
   else if(distance>100 && distance<300)
   {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    Serial.println("Tank is almost empty");
   }
   else 
   {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
   }
}
