int fsrAnalogPin = A0; // FSR is connected to analog 0
//int fsrAnalogPinR = A1; // FSR is connected to analog 0
//int LEDpin = 11;      // connect Red LED to pin 11 (PWM pin)
int fsrReading;      // the analog reading from the FSR resistor divider
//int fsrReadingR;
//int LEDbrightness;
 
void setup(void) {
  Serial.begin(9600);   // We'll send debugging information via the Serial monitor
//  pinMode(LEDpin, OUTPUT);
}
 
void loop(void) {
  fsrReading = analogRead(fsrAnalogPin);
   delay(100);
//  fsrReading = analogRead(fsrAnalogPin);
//  delay(100);
  Serial.println(fsrReading);
//  Serial.print(",");
//   delay(100);
//  Serial.println(fsrReadingR); 
//  delay(100);
}
