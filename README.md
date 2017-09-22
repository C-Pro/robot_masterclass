# Arduino robot master-class #

This repository contains resources needed to complete master-class on building Arduino based wheeled robot, controlled from Android app via bluetooth.

## Arduino sketches ##

First of all, downoad Arduino IDE for your platform (not web based one) here:
https://www.arduino.cc/en/main/software

You'll need to download and install AFMotor library to control motors through motor shield: https://github.com/adafruit/Adafruit-Motor-Shield-library/archive/master.zip
Instructions on installing it: https://learn.adafruit.com/arduino-tips-tricks-and-techniques/arduino-libraries

* [mc-01](../master/mc-01.ino) Arduino sketch to blink onboard LED
* [mc-02](../master/mc-02.ino) Arduino sketch to drive the motors
* [mc-03](../master/mc-03.ino) Arduino sketch to communnicate via HC-05/HC-06 bluetooth serial module
* [mc-04](../master/mc-04.ino) Adruino sketch to control robot via bluetooth

## Android app ##

[LED directory](../blob/master/LED) contains Android remote-control app sources. It is slightly modified version of app found in this tutorial http://www.instructables.com/id/Android-Bluetooth-Control-LED-Part-2/

You can just install prebuilt  [apk file](../master/rc.apk) or download [Android Studio](https://developer.android.com/studio/index.html) and build app from source.

