cmd_drivers/hid/hid-picolcd.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-picolcd.ko drivers/hid/hid-picolcd.o drivers/hid/hid-picolcd.mod.o
