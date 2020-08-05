String voice;
int led=9;
int led1=10;
void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  voice="";
}

void loop() 
{
  while (Serial.available()){  
  delay(10); 
  char c = Serial.read(); 
  if (c == '#') 
  {
    break;
  }
  voice += c; 
  } 
   if (voice.length() > 0) 
   {
    Serial.println(voice);
    
    }
    if(voice=="*medium")
    {
       analogWrite(led,50);
       digitalWrite(led1,HIGH);
       delay(500);
       digitalWrite(led1,LOW);
       delay(500);
       digitalWrite(led1,HIGH);
       delay(500);
       digitalWrite(led1,LOW);
       delay(500);
       digitalWrite(led1,HIGH);
       delay(500);
       digitalWrite(led1,LOW);
       delay(500);
       digitalWrite(led1,HIGH);
       delay(500);
       digitalWrite(led1,LOW);
       delay(500);
       digitalWrite(led1,HIGH);
       delay(500);
       digitalWrite(led1,LOW);
       delay(500);
       digitalWrite(led1,HIGH);
       delay(500);
       digitalWrite(led1,LOW);
       delay(500);
      
     }
     else if(voice=="*on")
    {
      analogWrite(led,250);
      digitalWrite(led1,HIGH);
      delay(500);
     
     }
     else if(voice=="*bye")
     {
      analogWrite(led,0);
      digitalWrite(led1,LOW);
     } voice="";    }

