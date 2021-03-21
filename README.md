# TFT-Hardware-Monitor

The project is taken as a basis: https://github.com/koogar/Gnat-Stats
To obtain data from PC, use: https://github.com/koogar/HardwareSerialMonitor

In original project written that works with Adafruit_GFX Version 1.7.5, but I used last version 1.9.0, compilate and work with it fine. For settings edit Configuration_Settings.h. I used [STM32F103C8T6](https://aliexpress.ru/item/32525208361.html?spm=a2g0s.12269583.0.0.738d33ddSBk5Ei) (bluepill) with micro-usb port and 2.8" 240x320 [TFT Display](https://aliexpress.ru/item/32982544355.html?spm=a2g0s.12269583.0.0.28027dabf5NlT3). Also need ST-Link for [download sketch](https://hobbyprojects.home.blog/2019/06/22/stm32f103-blue-pill-%D0%B8-%D0%B0%D1%80%D0%B4%D1%83%D0%B8%D0%BD%D0%BE-ide/).

I create mount for Noctua NH-U9S cooler. Get 3D model [this](https://www.thingiverse.com/thing:4801562). You can create cable 9-pin USB2.0 to MicroUSB to internal connection on motherboard.

To autostart HardwareSerialMonitor can use Task Sheduler.




[![Watch the video](https://img.youtube.com/vi/kjGCW0GJQG8/maxresdefault.jpg)](https://youtu.be/kjGCW0GJQG8)
