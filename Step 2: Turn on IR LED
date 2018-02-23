int ledState = LOW;             // ledState used to set the LED
long previousMillis = 0;
long interval = 200;           // interval at which to blink (milliseconds)
void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  digitalWrite(0, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
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
  }
}
