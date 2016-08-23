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
  // first thing to check/calculate sunrise for the day
    //q: will this need to be calculated everytime? 
    //q: can I calculate withs with unix time?
    //q: will time sync be needed? possibly handled via bluetooth app?
    // do i want to use sunrise? civic dawn? 
    // if were between sunrise and 45 minutes after sunrise
  ////if(timestamp > sunrise and timestamp < sunrise + 45 minutes)
    // if it's within 5 minutes of sunrise 
    //// if(timestamp < sunrise + 5minutes)
      // set output to low
   // else if its within 10 minutes 
   ////else if (timetamp < sunrise + 10minutes)
      // set output to medium low
  // else if its within 15
  ////else if (timetamp < sunrise + 15minutes)
    // set output to medium 
  // else if its within 20 
  ////else if (timetamp < sunrise + 20minutes)
    // set output to medium high
  // else if its within in 25 minutes
  ////else if (timetamp < sunrise + 25minutes)
    // set output to high
    //otherwise lets flash or twirl or something to get your attention
    ////else if (timetamp < sunrise + 30minutes)

    
  // future idea: if it's withn 30 minutes and some type of
  // acknowlegment hasn't been met, set off audible alarm.
  
  // future future idea:
  // possible BLE integration with some awesome smartphone app?

}
