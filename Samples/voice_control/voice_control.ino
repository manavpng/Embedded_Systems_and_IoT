String voice;
int led=9;

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
    if(voice=="*hello")
    {
      digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);digitalWrite(led,HIGH);
      delay(500);
      digitalWrite(led,LOW);
      delay(500);
     }
     else if(voice=="*on")
    {
      digitalWrite(led,HIGH);
      delay(500);
     
     }
     else if(voice=="*bye")
     {
      digitalWrite(led,LOW);
      
     } voice="";    }

