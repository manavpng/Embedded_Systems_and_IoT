int sw1=8;
int sw2=9;
int sw3=10;
int sw4=11;
int motor1=2;
int motor2=3;
int motor3=4;
int motor4=5;

void setup()
{
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
}

void loop()
{
  if (sw1==HIGH)
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor2,LOW);
    digitalWrite(motor3,HIGH);
    digitalWrite(motor4,LOW);
  }
  else if(sw2==HIGH)
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(motor3,HIGH);
    digitalWrite(motor4,LOW);
  }
  else if(sw3==HIGH)
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH);
    digitalWrite(motor3,LOW);
    digitalWrite(motor4,HIGH);
  }
  else if(sw4==HIGH)
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor2,LOW);
    digitalWrite(motor3,LOW);
    digitalWrite(motor4,LOW);
  }
  else
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(motor3,LOW);
    digitalWrite(motor4,LOW);
  }
}
