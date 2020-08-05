#include <IRremote.h>
#include <IRremoteInt.h>

int RECV_PIN = 9;//pin to which connect TSOP output pin 
int statusled = 13;

IRrecv irrecv(RECV_PIN); 
decode_results results;

void setup() 
{ 
irrecv.enableIRIn();
pinMode(statusled,OUTPUT);      
pinMode(2,OUTPUT);   
pinMode(3,OUTPUT);  
pinMode(4,OUTPUT);      
pinMode(5,OUTPUT); 

digitalWrite(statusled,LOW); 
Serial.begin(9600); 
}

void loop() 
{ 
  
if (irrecv.decode(&results)) 
 { 
  digitalWrite(statusled,HIGH); 
  Serial.println(results.value, HEX);//This will show HEX code from Remote in Serial Monitor 
  delay(100); 
  irrecv.resume();

if (results.value == 0x1FED827) // type your remote FORWARD robot control button hex value.
 {  
 digitalWrite(2, HIGH);  
 digitalWrite(3, LOW);  
 digitalWrite(4, HIGH);   
digitalWrite(5, LOW); 
}

else if(results.value == 0x1FEF00F)// type your remote BACK robot control button hex value. 
{   
 digitalWrite(2, LOW);  
 digitalWrite(3, HIGH);   
digitalWrite(4, LOW); 
 digitalWrite(5,HIGH);
 }

else if(results.value == 0x1FE708F)// type your remote RIGHT robot control button hex value. 
{  
 digitalWrite(2, HIGH);   
  digitalWrite(3, LOW); 
  digitalWrite(4, LOW);  
 digitalWrite(5, LOW); 
}

else if(results.value == 0x1FE30CF)// type your remote LEFT robot control button hex value.
{ 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}

else if(results.value == 0x1FEB04F)// type your remote STOP robot control button hex value.
{ 
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);;
}

}
}

