int counter = 0;

//pin 1: regular LED  D so 1
//pin 2: IR sensor A so A1
void setup() {
  //  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, INPUT);
  //digitalWrite(0, HIGH);
}

void loop() {
  if (digitalRead(2) == 0) {
    counter++;
  }
  
  if (counter >= 2) {
    digitalWrite(1, HIGH);
    while(true);
  }
}
