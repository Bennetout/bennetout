cmd_drivers/hid/hid-dr.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-dr.ko drivers/hid/hid-dr.o drivers/hid/hid-dr.mod.o
