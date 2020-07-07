/*-----------------------------------------------------------------------------------------
  Name:         fade.ino
  Version:      1.0
  Description:  This code fades the LED on and off by changing the PWM duty cycle.
  Author:       Ed's Lab
  Date:         July 7th 2020.
------------------------------------------------------------------------------------------*/


int LED = 11;             // declare LED pin with PWM. 
                          // Pins with PWM in Arduino UNO: 3, 5, 6, 9, 10, and 11.
void setup() {
  pinMode(LED, OUTPUT);   // set LED pin as output
}

void loop() {
  
  // Fade the LED from 0-255.
  for(int i=0; i<256; i++){
    analogWrite(LED, i);
    delay(5);             // waits for 5 milliseconds
    }

  // Fade the LED from 255-0.
  for(int i=255; i>=0; i--){
    analogWrite(LED, i);
    delay(5);             // waits for 5 milliseconds
    }
    
}
