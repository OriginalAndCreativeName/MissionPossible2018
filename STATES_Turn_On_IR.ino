void setup() {
  // put your setup code here, to run once:
  int inputPin = 1; //reed switch
  int outputPin = 0; //IR LED
  pinMode(outputPin, OUTPUT);
  pinMode(inputPin, INPUT_PULLUP);
  digitalWrite(inputPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(inputPin) == 0) {
    digitalWrite(outputPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(outputPin, LOW);
    delayMicroseconds(10);
  }
}
