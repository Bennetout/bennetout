cmd_drivers/hid/hid-sony.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-sony.ko drivers/hid/hid-sony.o drivers/hid/hid-sony.mod.o
