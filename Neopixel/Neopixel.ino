#include <Adafruit_NeoPixel.h>

#define PIN 6        // Data pin connected to DIN
#define NUMPIXELS 4  // Number of LEDs

Adafruit_NeoPixel strip(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Turn OFF all LEDs at start
}

void loop() {

  // 🔴 Red chase
  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, strip.Color(255, 0, 0));
    strip.show();
    delay(200);
  }

  delay(500);

  strip.clear();
  strip.show();
  delay(300);

  // 🟢 Green chase
  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, strip.Color(0, 255, 0));
    strip.show();
    delay(200);
  }

  delay(500);

  strip.clear();
  strip.show();
  delay(300);

  // 🔵 Blue chase
  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 255));
    strip.show();
    delay(200);
  }

  delay(500);

  strip.clear();
  strip.show();
  delay(500);
