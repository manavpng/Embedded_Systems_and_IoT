int ldr=A0;

void setup() 
{
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int val = analogRead(ldr);
  val = map(val, 0, 1023, 0, 100);
  Serial.print(val);
}
