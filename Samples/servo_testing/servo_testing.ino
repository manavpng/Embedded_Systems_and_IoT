#include <Servo.h> 

int servo= 3;
Servo Servo1;

void setup() 
{ 
  Servo1.attach(servo);
}

void loop()
{
  Servo1.write(0);
  delay(1000);
  Servo1.write(90);
  delay(1000);
  Servo1.write(180);
  delay(1000);
}

