cmd_drivers/input/evdev.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/evdev.ko drivers/input/evdev.o drivers/input/evdev.mod.o
