char data = 0;            
void setup()
{
    Serial.begin(9600);                                  
    pinMode(13, OUTPUT);  
    pinMode(12, OUTPUT); 
}
void loop()
{
   while(Serial.available()>0)      
   {
      char data = Serial.read();          
      if(data == '1')
      {
        Serial.println(data);  
         digitalWrite(13,HIGH); 
         digitalWrite(12,LOW);
      }
      else if(data == '2')
      {
        Serial.println(data);  
         digitalWrite(13, LOW);
         digitalWrite(12,HIGH);   
      }  
      
      else if(data == '0')
      {
        Serial.println(data);  
         digitalWrite(13, LOW);
         digitalWrite(12,LOW);   
      }  
       else if(data == '3')
      {
        Serial.println(data);  
         digitalWrite(13,HIGH);
         digitalWrite(12,HIGH);   
      }
      else
      {
        Serial.println("Wrong input");
         digitalWrite(13, LOW);
         digitalWrite(12,LOW); 
        delay(1000);  
      }
   }
}
