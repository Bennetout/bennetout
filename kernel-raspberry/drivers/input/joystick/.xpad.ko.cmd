cmd_drivers/input/joystick/xpad.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/joystick/xpad.ko drivers/input/joystick/xpad.o drivers/input/joystick/xpad.mod.o