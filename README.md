# myoraptor-controller
This is the second iteration (but let's call it version 1.0) of a project combining the Raptor Reloaded 3D printed prosthetic with a MyoWare EMG sensor, a DC motor, and a Teensy 3.2. The goal is to build a prosthetic hand that responds to muscle contractions. I worked on the first iteration with an exceptional high school student who prototyped the design of the electronics control system using an Arduino Uno, breadboard, and wires. Shashi Jain designed the linear rail adapter and inspired us to combine the motor-driven Raptor with the MyoWare sensor. My contribution to this project was in pulling together the great work of these others and creating the PCB to slim down the device into something potentially wearable. I also want to thank <a href="https://github.com/wickerbox/">Wickerbox Electronics</a> for the KiCAD support and library resources!

This repository contains KiCAD design files for a PCB shield for the Teensy 3.2, as well as the Arduino code used to operate the hand.

Visit <a href="http://www.chloefleming.com/?p=90">my website</a> for pictures and more information.

## Components
1 x <a href="http://www.thingiverse.com/thing:596966">Raptor Reloaded</a> hand (scaled to 122%)</br>
1 x <a href="https://tinkercad.com/things/4MtmrpRE7Zj">linear rail adapter</a> for the Raptor Reloaded</br>
1 x <a href="https://www.adafruit.com/product/2699">MyoWare EMG sensor</a></br>
1 x <a href="https://oshpark.com/shared_projects/Pn4XONTR">MyoRaptor Controller PCB</a></br>
1 x DC motor (up to 12V)</br>

## Notes on Version 1.0
Here are some thoughts I have on the current working state of this project, and what should be done to improve future versions: </br>
* I am using a 9V battery to drive this circuit, but I am not convinced that this is moving the motor quickly enough and will likely look into other options.
* The DC motors with sufficient torque tend to be a bit bulky, and attaching them to the Raptor is not easy (this is currently being accomplished with a cheap plastic pipe clamp and a zip tie). A custom printed part should be designed to hold the motor. I'd also like to try to locate a smaller motor to power the hand.
* Right now, the PCB and linear rail adapter are sized to fit in the 122% hand. The linear rail should be made scalable with parameters and the PCB size may also need to be adjusted for smaller hands.
* The current version lacks a neat way to attach the PCB to the inside of the palm of the hand, which is another thing I'd like to improve with a printed part.

## Assembly Instructions
(in progress)
