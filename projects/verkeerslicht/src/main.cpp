#include <Arduino.h>

/**
 * Hier gaan we een 
 */

#define ROOD  26
#define GROEN 25

void setup() {
  pinMode( ROOD, OUTPUT );
  pinMode( GROEN, OUTPUT );
  digitalWrite(ROOD, LOW);
  digitalWrite(GROEN, LOW);
}

void loop() {
  digitalWrite(ROOD, HIGH);
  delay(1000);
  digitalWrite(ROOD, LOW );
  delay(1000);
  digitalWrite(GROEN, HIGH);
  delay(1000);
  digitalWrite(GROEN, LOW );
  delay(1000);
}