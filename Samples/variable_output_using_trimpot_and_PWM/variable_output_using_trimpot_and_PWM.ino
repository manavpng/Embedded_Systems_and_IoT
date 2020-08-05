int led=3;
int count=0;
int temp;
void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  
  if(count<127){
  count=count+1;
  temp=count*5;  
  analogWrite(led,temp);
  Serial.println(temp);
  delay(100);
  }
  else if(count<253 && count>=127)
  {
    count=count-1;
    temp=count*5;
    analogWrite(led,temp);
    Serial.println(temp);
    delay(100);
  }
}
