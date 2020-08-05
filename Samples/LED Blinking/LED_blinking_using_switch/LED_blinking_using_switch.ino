int pinButton = 8;
int LED = 2;
int stateLED = LOW;
int stateButton;
int previous = LOW;
long time = 0;
long debounce = 200;
int amp;
 
void setup() {
  pinMode(pinButton, INPUT);
  pinMode(LED, OUTPUT);
}
 
void loop() {
  stateButton = digitalRead(pinButton);  
  if(stateButton == HIGH &amp;&amp; previous == LOW &amp;&amp; millis() - time &gt; debounce) {
    if(stateLED == HIGH){
      stateLED = LOW; 
    } else {
       stateLED = HIGH; 
    }
    time = millis();
  }
  digitalWrite(LED, stateLED);
  previous == stateButton;
}
