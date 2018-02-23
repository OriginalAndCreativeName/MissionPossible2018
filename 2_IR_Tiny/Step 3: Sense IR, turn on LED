int counter = 0;

//pin 1: regular LED  D so 1
//pin 2: IR sensor A so A1
void setup() {
  //  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  digitalWrite(0, HIGH);
}

void loop() {
  /*unsigned long currentMillis = millis();
    if (currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    }
    else {
      ledState = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(0, ledState);
    //Serial.println(analogRead(2));
    }*/
  if (analogRead(A1) < 200) {
    counter++;
  }
  unsigned long currentMillis = millis();
  
  if (counter >= 2) {
    if (currentMillis > 8000) {
      digitalWrite(1, HIGH);
      while(true);
    }
    else {
      delay (8000 - currentMillis);
      digitalWrite(1, HIGH);
      while(true);
    }
  }
}
