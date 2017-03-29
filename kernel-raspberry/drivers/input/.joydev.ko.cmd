cmd_drivers/input/joydev.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/joydev.ko drivers/input/joydev.o drivers/input/joydev.mod.o
