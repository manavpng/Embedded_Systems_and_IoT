int motor1=8;
int motor2=9;
int sw1=2;
int sw2=3;

void setup() 
{
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  Serial.begin(9600);
  }

void loop() 
{
  int x1= digitalRead(sw1);
  int x2=digitalRead(sw2);
  Serial.print("Switch no. 1=");
  Serial.println(x1);
  delay(500);
  Serial.print("Switch no. 2=");
  Serial.println(x2);
  delay(500);
  if (x1==HIGH&& x2==HIGH)
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH);
    digitalWrite(motor2,LOW);  
  }
  else if (x1==HIGH&& x2==LOW)
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(motor2,LOW);  
  }
  else if (x1==LOW&& x2==HIGH)
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH);
    digitalWrite(motor2,LOW);  
  }
  else 
  {
    digitalWrite(motor1,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(motor2,LOW);  
  }
}
