int ir2=3;
int ir1=2;
int count=0;

void setup() 
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  Serial.begin(9600);
  
}

void loop() 
{
  int x= digitalRead(ir1);
  int y=digitalRead(ir2);
  if(x==HIGH && y==HIGH)
  {
    count++;
    Serial.print("Customer No.=");
    Serial.println(count);
    delay(100);
  }
  else
  {
    Serial.print("dukaan toh khol");
  }
}
