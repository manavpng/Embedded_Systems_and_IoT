int sw1=8;
int sw2=9;
int led1=2;
int led2=3;
int led3=4;
int led4=5;
int count=0;
void setup()
{
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int state1= digitalRead(sw1);
  if(state1==HIGH)
  {
    count++;
    delay(00);
    
  }
  
  else if(count==1)
  {
    digitalWrite(led1,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
    delay(1000);
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
    delay(1000);
    digitalWrite(led3,HIGH);
    delay(1000);
    digitalWrite(led3,LOW);
    delay(1000);
    Serial.println(count);
   
  }
else if(count==2)
{
    digitalWrite(led4,HIGH);
    delay(1000);
    digitalWrite(led4,LOW);
    delay(1000);
    count=0;
    Serial.println(count);
}
else
  {

    digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
            digitalWrite(led3,LOW);
                digitalWrite(led4,LOW);
                Serial.println(count);
  }
}

