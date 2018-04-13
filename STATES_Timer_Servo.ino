#include <SoftwareServo.h> 

SoftwareServo dumper;

void setup() 
{ 
  dumper.attach(1);
  int inputPin = 2; //limit switch from levers
  pinMode(inputPin, INPUT_PULLUP);
  digitalWrite(inputPin, HIGH);
} 

void loop() {
  if (digitalRead(inputPin) == 0) {
    for(int pos = 0; pos < 90; pos += 1) {
        dumper.write(pos);              // tell servo to go to position in variable 'pos' 
        SoftwareServo::refresh();        // must call at least once every 50ms or so to keep your servos updating
        delay(10);    
    }
    while(true);
  }
}
