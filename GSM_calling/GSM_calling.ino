#include<GSM.h>
#define PINNUMBER ""
GSM gsmAccess; 
GSMVoiceCall vcs;
String remoteNumber = "";
char charbuffer[20];

void setup() 
{
  Serial.begin(9600); 
  Serial.println("Make Voice Call");
  
}

void loop() 
{
  boolean notConnected = true;
  while(notConnected)
  {
    if(gsmAccess.begin(PINNUMBER)==GSM_READY)
      notConnected = false;
    else
    {
      Serial.println("Not connected");
      delay(1000);
    }
  }
  Serial.println("GSM initialized.");
  Serial.println("Enter phone number to call.");
}

