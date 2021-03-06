# wemo-insight-touch-trigger

When the Belkin Wemo Insight loses and regains power, it will not turn back on automatically.  This is problematic since I want to use this to monitor the energy consumption of my networking equipment... otherwise I would just turn it on via [an API](https://github.com/iancmcc/ouimeaux).  This project allows me to trigger a touch on the Belkin Wemo Insight once the outlet it's plugged into has power.

I'm currently using an [Adafruit Trinket (5v)](https://www.adafruit.com/product/1501) to handle triggering the touch, but in the future I'll probably switch over to an ESP8266 so that I can send alerts and get other info about how often the Insight loses power.  Conveniently enough, the microcontroller can be powered from the micro-usb port on the Insight itself.
