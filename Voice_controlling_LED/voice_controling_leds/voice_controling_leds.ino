String voice;
int
led1 = 2, //Connect 1ST TRANSISTOR COLLECTOR To Pin #2
led2 = 3, //Connect 2ND TRANSISTOR COLLECTOR To Pin #3
led3 = 4, //Connect 3RD TRANSISTOR COLLECTOR To Pin #4
led4 = 5, //Connect 4TH TRANSISTOR COLLECTOR To Pin #5
led5 = 6; //Connect 5TH TRANSISTOR COLLECTOR To Pin #6
 
void allon(){
     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
     digitalWrite(led3, HIGH);
     digitalWrite(led4, HIGH);
     digitalWrite(led5, HIGH);
}
void alloff(){
     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
     digitalWrite(led3, LOW);
     digitalWrite(led4, LOW);
     digitalWrite(led5, LOW);
}
 
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
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
  if (voice.length() > 0) {
    Serial.println(voice);
   
   
       if(voice == "*all active") {allon();}  
  else if(voice == "*all deactive"){alloff();} 
 
  
  else if(voice == "*LED on") {digitalWrite(led1, HIGH);}
  else if(voice == "*CFL on") {digitalWrite(led2, HIGH);}
  else if(voice == "*fan on") {digitalWrite(led3, HIGH);}
  else if(voice == "*laptop on") {digitalWrite(led4, HIGH);}
  else if(voice == "*TV on") {digitalWrite(led5, HIGH);}
 
  else if(voice == "*LED shutdown") {digitalWrite(led1, LOW);}
  else if(voice == "*CFL shutdown") {digitalWrite(led2, LOW);}
  else if(voice == "*fan shutdown") {digitalWrite(led3, LOW);}
  else if(voice == "*laptop shutdown") {digitalWrite(led4, LOW);}
  else if(voice == "*TV shutdown") {digitalWrite(led5, LOW);}
   
voice="";}}


