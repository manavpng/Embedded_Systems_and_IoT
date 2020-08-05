char x;
int y;
int led = 3;
int led1 = 4;
String code;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
  code = "";
}


void loop()
{
  while (Serial.available() > 0)
  {
    x = Serial.read();
    code = code + x ;
  }
  /*if(code==" ")
  {
  Serial.println("Please enter a value");
  delay(200);
  code= "";
  }*/
   if(code=="1")
  {
  Serial.println("Hello");
  Serial.println("**********");
  delay(200);
  code= "";
  }
  else if(code=="2")
  {
  Serial.println("Hi");
  Serial.println("**********");
  delay(200);
  code= "";
  }
  else
  {
    Serial.println("Enter value to print message(1 or 2)");
    delay(1000);
  }
}
