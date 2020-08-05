int sw1=8;
int sw2=9;
int led1=2;
int led2=3;
int led3=4;
int led4=5;

void setup()
{
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop()
{
  int state1= digitalRead(sw1);
  int state2= digitalRead(sw2);
  if(state1==HIGH)
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
  }
  else if(state2==HIGH)
  {
    digitalWrite(led4,HIGH);
    delay(1000);
    digitalWrite(led4,LOW);
    delay(1000);
  }
  {

    digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
            digitalWrite(led3,LOW);
                digitalWrite(led4,LOW);
  }
}

