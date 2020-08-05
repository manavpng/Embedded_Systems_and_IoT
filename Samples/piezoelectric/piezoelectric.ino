int p=A0;
int led=3;
int threshold=300;

void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(p,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int x=analogRead(p);
  if(x>=threshold)
  {
    Serial.print("Pressure is=");
    Serial.println(x);
    Serial.println("******"); 
    digitalWrite(led,HIGH);
    delay(5000);
    digitalWrite(led,LOW);
  }
  else
  {
    
    digitalWrite(led,LOW);
  }
}
