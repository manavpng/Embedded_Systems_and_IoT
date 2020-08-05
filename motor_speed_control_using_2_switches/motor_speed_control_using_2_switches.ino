int sw1=8;
int sw2=9;
int motor1=3;
int motor2=5;

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
  if(sw1==HIGH && sw2==LOW)
  {
    Serial.println("Motor Speed= 50%");
    analogWrite(motor1,500);
    analogWrite(motor2,0);
  }
  else if(sw1==LOW && sw2==HIGH)
  {
    Serial.println("Motor Speed= 100%");
    analogWrite(motor1,1023);
    analogWrite(motor2,0);
  }
  else
  {
    analogWrite(motor1,0);
    analogWrite(motor2,0);
      
  }
    
}
