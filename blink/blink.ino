/*-----------------------------------------------------------------------------------------
  Name:         blink.ino
  Version:      1.0
  Description:  Turns an LED on for one second, then off for one second, repeatedly.
  Author:       Ed's Lab
  Date:         July 4th 2020.
------------------------------------------------------------------------------------------*/


int LED = 13;             // declare LED pin

void setup() {
  pinMode(LED, OUTPUT);  // set LED pin as output
}

void loop() {
  digitalWrite(LED, HIGH);    // turn the LED on
  delay(1000);                // wait 1 second
  digitalWrite(LED, LOW);     // turn the LED off
  delay(1000);                // wait 1 second
}
