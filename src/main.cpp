#include <Arduino.h>

void setup() {
  // Configure the onboard LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Note: On most ESP8266 boards, the onboard LED is Active-Low.
  // This means LOW turns it ON, and HIGH turns it OFF.
  
  digitalWrite(LED_BUILTIN, LOW);   // Turn the onboard LED ON
  delay(50);                        // Wait 50ms
  
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the onboard LED OFF
  delay(50);                        // Wait 50ms
  
  // Total cycle: 100ms = 10Hz (10 full blinks per second)
}