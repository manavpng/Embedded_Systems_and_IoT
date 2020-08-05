int lm=A0;
int led=2;
int motor1=3;
int motor2=4;
int pump=5;
int echo=6;
int trig=7;
long distance;
long samay;
int ms=A1;

void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(lm,INPUT);
  pinMode(ms,INPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  samay=pulseIn(echo,HIGH);
  distance=samay/29/2;
  
  int w=analogRead(ms);
  //Serial.println(w);
  delay(100);
  
  int x= analogRead(lm);
  float y=(x/1023.0)*5000;
  float temp=y/10;

//Condition 1
  
  if(temp<35&& w>900&& distance<15)
  {
    Serial.println("*********");
    Serial.println("***Watering the plant***");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("Normal Temperature");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("*********");

    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(pump,HIGH);
    delay(10000);
    digitalWrite(pump,LOW);
    delay(50);
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    Serial.begin(9600);  //Baud rate of the GSM/GPRS Module 
    Serial.print("\r");
    delay(1000);                  
    Serial.print("AT+CMGF=1\r");    
    delay(1000);
    Serial.print("AT+CMGS=\"+918441016814\"\r");    //Number to which you want to send the sms
    delay(1000);
    Serial.print("Alert");   //The teisionxt of the message to be sent
    delay(1000);
    Serial.write(0x1A);
    delay(1000); 
   }

//Condition 2
   
   else if(temp<35&& w>900&& distance>15)
  {
    Serial.println("*********");
    Serial.println("***Watering the plant***");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("Normal Temperature");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("*********");
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);   
    digitalWrite(pump,HIGH);
    delay(10000);
    digitalWrite(pump,LOW);
    delay(50);
   }

//Condition 3
   
   else if(temp<35&& w<900&& distance<15)
  {
    Serial.println("*********");
    Serial.println("***Pump is off***");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("Normal Temperature");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("*********");

    
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);    
    digitalWrite(pump,LOW);
    delay(10000);
    Serial.begin(9600);  //Baud rate of the GSM/GPRS Module 
    Serial.print("\r");
    delay(1000);
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);                  
    Serial.print("AT+CMGF=1\r");    
    delay(1000);
    Serial.print("AT+CMGS=\"+918441016814\"\r");    //Number to which you want to send the sms
    delay(1000);
    Serial.print("Alert");   //The teisionxt of the message to be sent
    delay(1000);
    Serial.write(0x1A);
    delay(1000); 
    
   }

//Condition 4
   
   else if(temp<35&& w<900&& distance>15)
  {
    Serial.println("*********");
    Serial.println("***Pump is off***");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("Normal Temperature");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("*********");
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW); 
    digitalWrite(pump,LOW);
       
   }

//Condition 5
   
  else if(temp>35&& w>900&& distance<15)
  {
    Serial.println("*********");
    Serial.println("watering the plant");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("too hot= Shed is on");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("***********");
    digitalWrite(motor1,HIGH);
    delay(5000);
    digitalWrite(motor2,LOW);
    delay(100);
    digitalWrite(pump,HIGH);
    delay(10000);
    digitalWrite(pump,LOW);
    delay(50);
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    Serial.begin(9600);  //Baud rate of the GSM/GPRS Module 
    Serial.print("\r");
    delay(1000);                  
    Serial.print("AT+CMGF=1\r");    
    delay(1000);
    Serial.print("AT+CMGS=\"+918441016814\"\r");    //Number to which you want to send the sms
    delay(1000);
    Serial.print("Alert");   //The teisionxt of the message to be sent
    delay(1000);
    Serial.write(0x1A);
    delay(1000); 
    
  }

//COndition 6
  
  else if(temp>35&& w>900&& distance>15)
  {
    Serial.println("*********");
    Serial.println("watering the plant");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("too hot= Shed is on");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("***********");
    digitalWrite(motor1,HIGH);
    delay(5000);
    digitalWrite(motor2,LOW);
    delay(100);
    digitalWrite(pump,HIGH);
    delay(10000);
    digitalWrite(pump,LOW);
    delay(50);
    
  }

//Condition 7
  
  else if(temp>35&& w<900&& distance<15)
  {
    Serial.println("*********");
    Serial.println("Pump is off");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("too hot= Shed is on");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("***********");
    digitalWrite(motor1,HIGH);
    delay(5000);
    digitalWrite(motor2,LOW);
    delay(100);
    digitalWrite(pump,LOW);
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    Serial.begin(9600);  //Baud rate of the GSM/GPRS Module 
    Serial.print("\r");
    delay(1000);                  
    Serial.print("AT+CMGF=1\r");    
    delay(1000);
    Serial.print("AT+CMGS=\"+918441016814\"\r");    //Number to which you want to send the sms
    delay(1000);
    Serial.print("Alert");   //The teisionxt of the message to be sent
    delay(1000);
    Serial.write(0x1A);
    delay(1000); 
    
  }

//COndition 8
  
  else if(temp>35&& w<900&& distance>15)
  {
    Serial.println("*********");
    Serial.println("Pump is off");
    Serial.print("Moisture is=");
    Serial.println(w);
    Serial.println("too hot= Shed is on");
    Serial.print("Distance is=");
    Serial.println(distance);
    Serial.print("Temperature is=");
    Serial.println(temp);
    Serial.println("***********");
    digitalWrite(motor1,HIGH);
    delay(5000);
    digitalWrite(motor2,LOW);
    delay(100);
    digitalWrite(pump,LOW);
    
    
  }

//Condition 9
  
  else
  {
    Serial.println("*********");
    digitalWrite(led,LOW);
    digitalWrite(motor1,LOW);
    digitalWrite(motor2,LOW);
    digitalWrite(pump,LOW);
    Serial.println("Undefined Condition Program is smart but not too smart");
    Serial.println("*********");
  }
}
