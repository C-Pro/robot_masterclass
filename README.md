# Arduino robot master-class #

This repository contains resources needed to complete master-class on building Arduino based wheeled robot, controlled from Android app via bluetooth.

## Arduino sketches ##

First of all, downoad Arduino IDE for your platform: https://www.arduino.cc/en/main/software
I recommend getting offline one (second option), because web IDE requires you to install plugin anyway).

You'll need to download and install AFMotor library to control motors through motor shield: https://github.com/adafruit/Adafruit-Motor-Shield-library/archive/master.zip

Instructions on installing it: https://learn.adafruit.com/arduino-tips-tricks-and-techniques/arduino-libraries

There are four sketches that will introduce you into Arduino features we'll use for our robot gradualy.

* [mc_01.ino](../master/mc_01.ino) Arduino sketch to blink onboard LED
* [mc_02.ino](../master/mc_02.ino) Arduino sketch to drive the motors
* [mc_03.ino](../master/mc_03.ino) Arduino sketch to communnicate via HC-05/HC-06 bluetooth serial module
* [mc_04.ino](../master/mc_04.ino) Adruino sketch to control robot via bluetooth

## Android app ##

Simple bluetooth remote control App in Kotlin by Eduard Kovnatsky.

You can build it from source. Grab it here: https://github.com/PalmZE/RobotBrain

To do this you need Android Studio 3+ (now in Beta only 2017.09.22) and Kotlin plugin (you will be asked to install it when you import the project).
[apk file](../master/RobotBrain.apk)


Legacy app if you want to build Java app instead:

[LED directory](../master/LED) contains Android remote-control app sources. It is slightly modified version of app found in this tutorial http://www.instructables.com/id/Android-Bluetooth-Control-LED-Part-2/

You can just install prebuilt  [apk file](../master/rc.apk) or download [Android Studio](https://developer.android.com/studio/index.html) and build app from source.

