int e=2;
int t=3;
int i;
int o;
void setup(){
  pinMode (2,INPUT);
  pinMode (3,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  
long distance;
long duration;
  digitalWrite (3,LOW);
  delayMicroseconds(2);
  digitalWrite(3,HIGH);
  delayMicroseconds(10);
  digitalWrite (3,LOW);
  duration = pulseIn(2, HIGH);
  distance = duration /29/2;
 
  if (distance > 50 && distance < 95 && i < 10) 
  {i = i + 1;
  Serial.println();
  Serial.print("i=");
  Serial.print(i);
if (i == 10)
Serial.print("room is full");
}

 if (distance > 55 && distance < 95 && o >= 0) 
  { o = o - 1;
  Serial.println();
  Serial.print("o=");
  Serial.print(o);
if (o == 0)
Serial.print("room is empty");}
delay(100);}

