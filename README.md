# MDE-Personal-Locator-Beacon
The software for the MDE-Personal-Locator-Beacon project is split into three main sections: Transmission, receive, and user interface. The follow instructions explain how to set up the software to operate the beacon.

Tx Setup:
The beacon is programmed through the LoRa Feather M0 transmitter chip which interfaces with the Arduino IDE. To begin setup, plug in the the Feather M0 into your computer and open the Arduino IDE. Then, follow the instructions in the following link to download the RadioHead library which is a required package for the transmitter code: https://learn.adafruit.com/adafruit-feather-m0-radio-with-lora-radio-module/using-the-rfm-9x-radio. Next, in the IDE, navigate to the board manager and search "Adafruit Feather M0". Install the "Adafruit SAMD Boards by Adafruit" option. This will allow the Arduino IDE to interface with our specific board. The code is now ready to be flashed to the Feather.

Rx Setup:
Our current Rx code is located on a physical SD card which can be inserted into a Raspberry Pi4. The Ettus B200 USRP must be plugged into the Raspberry Pi, where a GNU-Radio script on the Pi can be run to begin receiving incoming LoRa packets. All hardware drivers must be installed in order to interface with the USRP.
**NOTE: we hope to move the Rx code to Git as well, but for now, everything is located on the SD card which was given to Virginia Tech

UI Setup:
The UI code is located in the "UI" branch on Git. Naviate to this branch to view the code as well as its associated README file.

