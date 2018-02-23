// the value of the 'other' resistor
#define SERIESRESISTOR 10000    
 
// What pin to connect the sensor to
#define WATERTASKPIN A0 
 
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}
 
void loop() {
  float reading;
 
  reading = analogRead(WATERTASKPIN);
 
  Serial.print("Analog reading "); 
  Serial.println(reading);
 
  if (reading < 800) {
    digitalWrite(2, HIGH);
  }
}
