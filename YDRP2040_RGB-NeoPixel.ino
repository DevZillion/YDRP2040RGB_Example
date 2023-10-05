#include <Adafruit_NeoPixel.h>
#define PIN 23
#define FADE_MS 25

Adafruit_NeoPixel LED(1, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);

void rgb_led(int r, int g, int b) {
  LED.setPixelColor(0, LED.Color(r, g, b));
  LED.show();
}

void setup() {
  LED.begin();
}

void loop() {
  for(int i = 0; i <= 255; i++) {
    rgb_led(255, i, 0);
    delay(FADE_MS);
  }
  for(int i = 255; i >= 0; i--) {
    rgb_led(i, 255, 0);
    delay(FADE_MS);
  }
  for(int i = 0; i <= 255; i++) {
    rgb_led(0, 255, i);
    delay(FADE_MS);
  }
  for(int i = 255; i >= 0; i--) {
    rgb_led(0, i, 255);
    delay(FADE_MS);
  }
  for(int i = 0; i <= 255; i++) {
    rgb_led(i, 0, 255);
    delay(FADE_MS);
  }
  for(int i = 255; i >= 0; i--) {
    rgb_led(255, 0, i);
    delay(FADE_MS);
  }
}