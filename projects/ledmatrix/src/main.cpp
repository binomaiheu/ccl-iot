#include <Arduino.h>

#include <LedMatrix.h>

#define NUMBER_OF_DEVICES 1 //number of led matrix connect in series

#define CS_PIN 15
#define CLK_PIN 14
#define MISO_PIN 2 //we do not use this pin just fill to match constructor
#define MOSI_PIN 12 // Master Out Slave In --> connect to DIN of led matrix

LedMatrix ledMatrix = LedMatrix(NUMBER_OF_DEVICES, CLK_PIN, MISO_PIN, MOSI_PIN, CS_PIN);
  
bool happy_face[8][8] = {
    {0,0,0,0,0,0,0,0},
    {0,1,1,0,0,1,1,0},
    {0,1,1,0,0,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,1,0,0,0,0,1,0},
    {0,0,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0}
};

bool sad_face[8][8] = {
    {0,0,0,0,0,0,0,0},
    {0,1,1,0,0,1,1,0},
    {0,1,1,0,0,1,1,0},
    {0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,0,0},
    {0,1,0,0,0,0,1,0},
    {0,0,0,0,0,0,0,0}
};

void setup() {
  ledMatrix.init();
}

void loop() {
  ledMatrix.clear();
  ledMatrix.commit();
  delay(500);

  ledMatrix.tekenMatrix(happy_face);
  ledMatrix.commit();
  delay(500);

  ledMatrix.clear();
  ledMatrix.commit();
  delay(500);

  ledMatrix.tekenMatrix(sad_face);
  ledMatrix.commit();
  delay(500);
}