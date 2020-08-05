int sw=8;
int count;
void setup() {
  pinMode(sw,INPUT);
  Serial.begin(9600);
}

void loop() {
  int state=digitalRead(sw);
  if (state==HIGH)
  {
    count++;
    Serial.println("Manvendra");
    count=0;
  }
  
}
