HackAirHoodie
=============

Arduino code to read input from stretch sensors and control LEDs.

We use the FastLED library because it is so nice :)


## Software Setup

We have to add the Adafruit Flora board to our Arduino environment.

Add the following URL to your Board Manager (Preferences -> Additional Board Manager URLs) : 
https://adafruit.github.io/arduino-board-index/package_adafruit_index.json

Now go to Tools -> Board -> Boards Manager and find the Adafruit AVR boards and install it.

Be sure to select the Flora board in Tools -> Board.


## Physical Setup

The LEDs need their own 5V power supply.

Be sure to connect the power supplys negative to the floras GND.


## References

FastLED : https://github.com/FastLED/FastLED

Adafruid Flora : https://learn.adafruit.com/getting-started-with-flora/
