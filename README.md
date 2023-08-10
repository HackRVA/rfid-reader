HackRVA PoE RFID
================
PoE powered RFID reader for access control at HackRVA.

# Setting Up the Firmware Project
1.  Follow the [Getting Start Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html)
    to install the toolchain and software required for developing with Zephyr.
2.  Initialze the workspace for the rfid project. Where you would run `git clone`
    instead run the following command:
    ```shell
    west init -m git@github.com:HackRVA/rfid-reader.git --mr main rfid
    ```
    This will create a new west workspace in `./rfid/` containing the repo in
    `./rfid/rfid-reader` using the repo as the manifest repository.
3.  Navigate into `./rfid/rfid-reader` and run `west update` to pull down zephyr
    and all of the requisite modules and libraries.

# Building the Firmware
To build the firmware for the Teensy 4.1 board with ethernet PHY, navigate to the
`./rfid/rfid-reader` directory and run the following command:
```shell
west build --pristine -b teensy41 app
```
This tells west to do a pristine build for the `teensy41` board using
`./rfid/rfid-reader/app/` as the application source directory.

# Flashing the Firmware
Once the firmware is built, it may be flashed onto the Teensy 4.1 board using
the PRJC supplied Teensy Loader. Connect the Teensy and press the programming
button. Load the application from `./rfid/rfid-reader/build/zephyr/zephyr.hex`
then program the application to the board. While the program should run 
automatically, there is a chance that the phy will not initialize correctly
until a power cycle has been performed.

