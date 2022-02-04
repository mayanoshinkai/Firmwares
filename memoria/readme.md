# Memoria

![Memoria](https://i.imgur.com/GHaTTeT.png)

A hotswap drop-in PCB for the V4N4G0N family of keyboards.

* Keyboard Maintainer: [Mayano Shinkai](https://github.com/mayanoshinkai)
* Hardware Supported: Memoria rev1.0 PCB
* Hardware Availability: [Github](https://github.com/mayanoshinkai/Memoria)

Make example for this keyboard (after setting up your build environment):

    make memoria:default

Flashing example for this keyboard:

    make memoria:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
