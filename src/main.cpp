#include <Arduino.h>

void setup() {
  pinMode(5, OUTPUT);  // Built-in LED on GPIO5
  pinMode(4, OUTPUT);  // External LED on GPIO4
}

void loop() {
  // Blink the built-in LED (slower blink)
  digitalWrite(5, HIGH);  // Turn on the built-in LED
  delay(1000);            // Wait for 1 second
  digitalWrite(5, LOW);   // Turn off the built-in LED
  delay(1000);            // Wait for 1 second

  // Blink the external LED (faster blink)
  digitalWrite(4, HIGH);  // Turn on the external LED
  delay(500);             // Wait for 0.5 seconds
  digitalWrite(4, LOW);   // Turn off the external LED
  delay(500);             // Wait for 0.5 seconds
}