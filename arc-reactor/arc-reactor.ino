#include <Adafruit_NeoPixel.h>

#define PIN             1
#define NUMPIXELS       31

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t arcBlue = pixels.Color(5, 5, 255);

void setup() {
  // Give LEDs time to receive power before setup
  pixels.begin();
  for(int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, arcBlue);
  }
  pixels.setBrightness(255);
  pixels.show();
}

void loop() {}
