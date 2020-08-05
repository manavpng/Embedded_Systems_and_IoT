#include <IRremote.h>
 
int RECV_PIN = 4; // the pin where you connect the output pin of TSOP4838
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;
int itsONled[] = {0,0,0,0,0,0};

#define code1  34905 // code received from button A
#define code2  18715 // code received from button B
#define code3  51655 // code received from button C
/*#define code4  51655 // code received from button d
#define code5  51655 // code received from button e*/
 
IRrecv irrecv(RECV_PIN);
 
decode_results results;
 
void setup()
{
  Serial.begin(9600);   
  irrecv.enableIRIn();  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
 /*pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);*/
}
 
void loop() {
 
 if (irrecv.decode(&results)) {
    unsigned int value = results.value;
    switch(value) {
       case code1:
         if(itsONled[1] == 1) {        
            digitalWrite(led1, LOW);   
            itsONled[1] = 0;           
         } else {                      
             digitalWrite(led1, HIGH); 
             itsONled[1] = 1;          
         }
          break; 
       case code2:
         if(itsONled[2] == 1) {
            digitalWrite(led2, LOW);
            itsONled[2] = 0;
         } else {
             digitalWrite(led2, HIGH);
             itsONled[2] = 1;
         }
          break;
       case code3:
         if(itsONled[3] == 1) {
            digitalWrite(led3, LOW);
            itsONled[3] = 0;
         } else {
             digitalWrite(led3, HIGH);
             itsONled[3] = 1;
         }
          break;
     /*    case code4:
         if(itsONled[4] == 1) {
            digitalWrite(led4, LOW);
            itsONled[4] = 0;
         } else {
             digitalWrite(led4, HIGH);
             itsONled[4] = 1;
         }
          break;  
 case code5:
         if(itsONled[5] == 1) {
            digitalWrite(led5, LOW);
            itsONled[5] = 0;
         } else {
             digitalWrite(led5, HIGH);
             itsONled[5] = 1;
         }
          break;    */      
  
    }
    Serial.println(value); // you can comment this line
    irrecv.resume(); // Receive the next value
  }
}
