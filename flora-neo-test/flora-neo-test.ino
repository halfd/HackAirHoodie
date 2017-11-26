/* 
 *  We want the yellow-orange colors
 *  12 - 40 approx
 *  
 */

#include <FastLED.h>
#define NUM_LEDS 3

CRGB a_leds[NUM_LEDS];
CRGB b_leds[NUM_LEDS];

// Here are variables to control the colors
static uint8_t low_color = 12;
static uint8_t high_color = 40;

boolean going_up = true;
static uint8_t b = low_color;
static uint8_t cb = low_color;

void setup() {
  pinMode(12, INPUT);
  
  FastLED.addLeds<NEOPIXEL, 1>(a_leds, NUM_LEDS);
  FastLED.addLeds<NEOPIXEL, 10>(b_leds, NUM_LEDS);

  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(12));
  
  for (int i = 0; i < NUM_LEDS; i++) {
    cb = b;
    
    a_leds[i] = CHSV( cb , 200 , 200 );
    b_leds[i] = CHSV( cb -12, 200 , 200 );
  }

  if (going_up) {
    b++;
  } else {
    b--;
  }
  
  if (b > high_color) {
    going_up = false;
  } else if (b < low_color) {
    going_up = true;
  }

  FastLED.show();

  delay(120);
}
