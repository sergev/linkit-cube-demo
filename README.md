# LED cube demo for Linkit Smart 7688 board

Hardware:
* [LinkIt Smart 7688](http://www.seeedstudio.com/wiki/LinkIt_Smart_7688) board,
* [LED cube 8x8x8](http://8x8x8ledcube.blogspot.com/), and
* simple [vibration sensor module](http://henrysbench.capnfatz.com/henrys-bench/arduino-sensors-and-input/ky-002-arduino-vibration-shake-sensor-manual-and-tutorial/).

Software:
* [MRAA library](https://github.com/sergev/mraa) adapted for Linkit Smart 7688 platform,
* Debian Linux installed over the factory OpenWRT system of the Linkit Smart 7688 board.

The demo program is written in C, with usage of MRAA library - an emerging
standard for a low level access to IoT hardware resources from the Linux
application.  The demot displays a few different animations in a loop.
A user can tap the sensor to skip the current animation and jump to next one.

For detailed hardware information, see the
[Wiki section](https://github.com/sergev/linkit-cube-demo/wiki/Hardware-information).
