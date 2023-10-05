#include<FastLED.h>

#define NUM_LEDS 1
#define FADE_MS 25

CRGB LED[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812,PIN_NEOPIXEL,GRB>(LED,NUM_LEDS);
}

void rgb_led(int r, int g, int b) {
  LED[0] = CRGB(r, g, b);
  FastLED.show();
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
