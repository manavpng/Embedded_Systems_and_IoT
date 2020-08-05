int sw1=2;
int sw2=3;
int led1=4;
int led2=5;
int motor1=6;
int motor2=7;
int motor3=8;
int motor4=9;
int count;

void setup() 
{
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int x= digitalRead(sw1);
  int y=digitalRead(sw2);
  if(x==HIGH && y==LOW)
  {
      count++;
      Serial.print("Number of cars=");
      Serial.println(count);
      digitalWrite(led1,HIGH);
      delay(1000);
      digitalWrite(motor1,HIGH);
      delay(5000);
      digitalWrite(motor2,LOW);
      delay(5000);
      digitalWrite(motor2,HIGH);
      delay(5000);
      digitalWrite(motor1,LOW);
      delay(5000);
   }
   else if(x==LOW && y==HIGH)
   {
      count--;
      Serial.print("Number of cars=");
      Serial.println(count);
      digitalWrite(led2,HIGH);
      delay(1000);
      digitalWrite(motor3,HIGH);
      delay(5000);
      digitalWrite(motor4,LOW);
      delay(5000);
      digitalWrite(motor4,HIGH);
      delay(5000);
      digitalWrite(motor3,LOW);
      delay(5000);
          
   }
   else
   {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(motor3,LOW);
    digitalWrite(motor4,LOW);
    Serial.print("Number of cars=");
    Serial.println(count);
   }

}
