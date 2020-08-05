#include <IRremote.h>
#include <IRremoteInt.h>
int tsop=A0;
int led=2;
 void setup()  
 {  
  pinMode(tsop,INPUT); 
  pinMode(led,OUTPUT); 
  Serial.begin(9600);  
 }  
 void loop()  
 {  
  int remote_val = remote();  
  if(remote_val>0)  
  {  
   Serial.println(remote_val);  
   delay(100); 
   if(remote_val=256)
   {
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    
   }
   else if(remote_val=320)
   {
    digitalWrite(led,LOW);
    
   }
   }
 
 
 }  
 int remote()  
 {  
  int value = 0;  
  int time = pulseIn(tsop,LOW);  
  if(time>2000)
  {  
   for(int counter1=0;counter1<12;counter1++)  
   {  
    if(pulseIn(tsop,LOW)>1000)   
    {  
     value = value + (1<< counter1);
    }  
   }  
  }  
  return value;  
 }  
