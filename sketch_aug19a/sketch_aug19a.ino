#include <time.h>
#include <Adafruit_NeoPixel.h>

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel ring = Adafruit_NeoPixel(12, PIN,NEO_RGBW)

void setup() {
  // put your setup code here, to run once:
  
  //todo: lookup begin.
  //todo: lookup show.
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {
  // put your main code here, to run repeatedly:
  // first thing to check/calculate sunrise for the day
    // if it's within 5 minutes of sunrise 
      // set output to low
   // else if its within 10 minutes 
      // set output to medium low
  // else if its within 15
    // set output to medium 
  // else if its within 20 
    // set output to medium high
  // else if its within in 25 minutes
    // set output to high

  // future idea: if it's withn 30 minutes and some type of
  // acknowlegment hasn't been met, set off audible alarm.
  
  // future future idea:
  // possible BLE integration with some awesome smartphone app?

}
