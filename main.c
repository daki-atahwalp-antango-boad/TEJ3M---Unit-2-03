/* This program turns a LED (from pin 7) on for one second, then off for one second, 
repeating this process while increasing the time the LED is on by 1 second each interval

Created on Feb 2025
By Daki A.B
*/ 

// set variable, blinkTime, to 1000
const int PIN_7 = 7;
int blinkTime = 1000;   

// Initialize digital pin LED_BUILTIN as an output
void setup() {
  pinMode(PIN_7, OUTPUT);
}

void loop() {
  digitalWrite(PIN_7, HIGH);
  // turn on LED
  delay(blinkTime);
  // wiat for duration of blinkTime
  digitalWrite(PIN_7, LOW);
  // turn LED off
  delay(1000);
  // wait for a second

  blinkTime = blinkTime + 1000;
  // add one second to variable blinkTime 
 }
