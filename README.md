# SunlightLamp

A small project I put together using a raspberry pi and a neopixel ring. It will allow you to use the neopixels as an alarm clock. 

## Setting script at startup
 In order to get the script to run at startup you can use crontab. 
 
 `sudo crontab -e` and add the directory where you've cloned the `sunrise.py` script. 
 [Raspberrypi-spy](http://www.raspberrypi-spy.co.uk/2013/07/running-a-python-script-at-boot-using-cron/, "Raspberrypi-spy.co.uk") has a nice write up on how to do this.
