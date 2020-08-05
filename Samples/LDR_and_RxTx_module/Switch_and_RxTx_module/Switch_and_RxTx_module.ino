int sw1=2;
int sw2=3;
int led=8;
int led1=9;

void setup() 
{
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600); 
}

void loop() 
{
  int state1 = digitalRead(sw1);
  int state2 = digitalRead(sw2);
  Serial.print("Switch no. 1=");
  Serial.println(state1);
  Serial.print("Switch no. 2=");
  Serial.println(state2);
   Serial.println("******");
   
  if (state1==HIGH && state2==LOW)
  {
    digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(500);
  
  }
  else if (state1==LOW && state2==HIGH)
  {
    digitalWrite(led,LOW);
  delay(500);
  digitalWrite(led1,HIGH);
  delay(500);
  
  }
  else if (state1==HIGH && state2==HIGH)
  {
    digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led1,HIGH);
  delay(500);
  
  }
  else
  {
    digitalWrite(led,LOW);
    delay(500);
    digitalWrite(led1,LOW);
    delay(500);
   
  }
  /*digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);*/
}
