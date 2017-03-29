cmd_drivers/hid/hid-apple.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-apple.ko drivers/hid/hid-apple.o drivers/hid/hid-apple.mod.o
