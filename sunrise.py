#used the strand test as my example layout. 
import time
import datetime
import atexit
import pytz

from neopixel import *
from datetime import datetime

# LED strip configuration:
LED_COUNT      = 12      # Number of LED pixels.
LED_PIN        = 18      # GPIO pin connected to the pixels (must support PWM!).
LED_FREQ_HZ    = 800000  # LED signal frequency in hertz (usually 800khz)
LED_DMA        = 5       # DMA channel to use for generating signal (try 5)
LED_BRIGHTNESS = 255     # Set to 0 for darkest and 255 for brightest
LED_INVERT     = False   # True to invert the signal (when using NPN transistor level shift)

def colorWipe(ring, color, wait_ms=50):
        for i in range(ring.numPixels()):
		ring.setPixelColor(i, color)
		ring.show()
		time.sleep(wait_ms/1000.0)

def killTheLights(ring):
	for i in range(ring.numPixels()):
                ring.setPixelColor(i,Color(0,0,0))
                ring.show()

# Main program logic follows:
if __name__ == '__main__':
	# Create NeoPixel object with appropriate configuration.
	ring = Adafruit_NeoPixel(LED_COUNT, LED_PIN, LED_FREQ_HZ, LED_DMA, LED_INVERT, LED_BRIGHTNESS)
	# Intialize the library (must be called once before other functions).
	ring.begin()
	# register killTheLights method on exit of the program
        atexit.register(killTheLights, ring)
	print ('Press Ctrl-C to quit.')
	local_time = datetime.now(pytz.timezone("America/New_York"))


	while True:
                colorWipe(ring, Color(255, 0, 0))  # Red wipe
		colorWipe(ring, Color(0, 255, 0))  # Blue wipe
		colorWipe(ring, Color(0, 0, 255))  # Green wipe
              	print(local_time)
		#check time
                # utc is 4 hours ahead of est
                # if datetime.now().time().hour 
                #if time is between 630 - 700
                #if time is less than 640
                #low
                #turn on pixels one at a time over 30 seconds
		
                #if time is less than 650
                #medium
                #if time is less than 655
                #high
                #if time is less than 700
                #do all sorts of weird color patterns to try to wake up. 
