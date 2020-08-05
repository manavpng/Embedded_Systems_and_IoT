int ln=A0;
int led=2;
int md=A1;
int motor1=3;
int motor2=4;
int pump=5;

void setup() 
{
    pinMode(ln,INPUT);
    pinMode(md,INPUT);
    pinMode(led,OUTPUT);
    pinMode(motor1,OUTPUT);
    pinMode(motor2,OUTPUT);
    pinMode(pump,OUTPUT);
    Serial.begin(9600);
}

void loop() 
{
  int x=analogRead(md);
  Serial.print("Moisture in soil=");
  Serial.println(x);
  delay(1000);
  int w= analogRead(ln);
  float y=(w/1023.0)*5000;
  float temp=y/10;
  Serial.print("Temperature in Green House=");
  Serial.println(temp);
  delay(1000);
  if (temp<33&& x<100)
  {
    digitalWrite(led,HIGH);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(pump,HIGH);
   
  }
  else if(temp>40 && x<100)
  {
    digitalWrite(motor1,HIGH);
    digitalWrite(motor2,LOW);
    digitalWrite(led,LOW);
    digitalWrite(pump,HIGH);   
  }
  else
  {
    digitalWrite(led,LOW);
    digitalWrite(pump,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,HIGH);
  }
}
