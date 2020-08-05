int Xaxis= A2;
int Yaxis=A1;
int Zaxis=A0;

void setup() 
{
  pinMode(Xaxis,INPUT);
  pinMode(Yaxis,INPUT);
  pinMode(Zaxis,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int x=analogRead(Xaxis);
  int y=analogRead(Yaxis);
  int z=analogRead(Zaxis);
  Serial.print("X-axis");
  Serial.println(x);
  Serial.println("*****");
  delay(500);
  Serial.print("Y-axis");
  Serial.println(y);
  Serial.println("*****");
  delay(500);
  Serial.print("Z-axis");
  Serial.println(z);
  Serial.println("*****");
  delay(500);
}
