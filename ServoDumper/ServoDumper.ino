
#include <SoftwareServo.h>

SoftwareServo myservo;                 // create servo object to control a servo 

//pin 0:  D so 0
//pin 2: photocell A so A1
int initialReading;
int pos = 0;

void setup() {
  initialReading = analogRead(A1);
  pinMode(0, OUTPUT);
  digitalWrite(0, LOW);
  myservo.attach(1);
}

void loop() {
  if ((analogRead(A1)-initialReading) > 200) {
    delay(7000);
    for(pos = 0; pos < 90; pos += 1) {
      myservo.write(pos);              // tell servo to go to position in variable 'pos' 
      SoftwareServo::refresh();        // must call at least once every 50ms or so to keep your servos updating
      delay(90);    
    }
    while(true);     
  }
}
