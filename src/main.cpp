#include <Arduino.h>

void setup() {
  // Configure the onboard LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Note: On most ESP8266 boards, the onboard LED is Active-Low.
  // This means LOW turns it ON, and HIGH turns it OFF.
  
  digitalWrite(LED_BUILTIN, LOW);   // Turn the onboard LED ON
  delay(100);                        // Wait 100ms
  
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the onboard LED OFF
  delay(100);                        // Wait 100ms
  
  // Total cycle: 200ms = 5Hz (5 full blinks per second)
}