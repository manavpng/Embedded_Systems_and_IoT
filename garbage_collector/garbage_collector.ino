int trig=2;
int echo=3;
int motor1=4;
int motor2=5;
long distance;
long samay;

void setup() 
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{digitalWrite(trig,LOW);
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
    Serial.println("Dustbin is opening");
    digitalWrite(motor1,HIGH);
    delay(5000);
    digitalWrite(motor2,LOW);
    delay(5000);
    Serial.println("Dustbin is closing");
    digitalWrite(motor2,HIGH);
    delay(5000);
    digitalWrite(motor1,LOW);
    delay(5000);
   }
   else
   {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
   }
}
