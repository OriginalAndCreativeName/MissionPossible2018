void setup() {
  // put your setup code here, to run once:
  int inputPin = 1; //limit switch from timer
  int outputPin = 0; //electromagnet
  pinMode(inputPin, INPUT_PULLUP);
  digitalWrite(inputPin, HIGH);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(inputPin) == 0) {
    digitalWrite(outputPin, HIGH);
    delay(4000);
    digitalWrite(outputPin, LOW);
    while(true);
  }
} 
