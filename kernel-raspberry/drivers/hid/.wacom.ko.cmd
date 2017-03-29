cmd_drivers/hid/wacom.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/wacom.ko drivers/hid/wacom.o drivers/hid/wacom.mod.o
