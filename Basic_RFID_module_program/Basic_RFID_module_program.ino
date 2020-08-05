char x;
int y;
int led=3;
int led1=4;
String code;
void setup()

{
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600);
  code= "";
}

void loop()
{
  while (Serial.available() > 0)
  {
    x = Serial.read(); 
    code = code + x ;    
  }
    //Serial.print("Card no.=");
    Serial.println(code);
    delay(200);
   //  code= "";

     if(code=="44001A194F08")
     {
      Serial.println("Door no. 2");
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
      code="";
     }
     else if(code=="4400182E85F7")
     {
      Serial.println("Door no. 1");
      digitalWrite(led1,HIGH);
      delay(1000);
      digitalWrite(led1,LOW);
      delay(1000);
      code="";
     }
     else 
     {
      digitalWrite(led,LOW);
     }
     code="";
}
