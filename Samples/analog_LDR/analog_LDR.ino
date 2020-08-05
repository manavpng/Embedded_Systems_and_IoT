int ldr= A0;
int trm= A1;
int led1=2;
int led2=3;
void setup()
{
  pinMode(ldr,INPUT);
  pinMode(trm,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int state1 = analogRead(ldr);
  int state2 = analogRead(trm);
  Serial.println("LDR Output=");
  Serial.print(state1);
  Serial.println("...");
  delay(1000);
  Serial.println("TrimPOT Output=");
  Serial.print(state2);
  Serial.println("...");
  delay(1000);
  
  if (state1<300 && state2<500)
  {
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led2,HIGH);
    delay(100);
  }
  else if (state1>300 && state2<500)
  {
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led2,HIGH);
    delay(100);
  }
  else  if (state1<300 && state2>500)
  {
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
  }
  else
  {
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
  }
}

