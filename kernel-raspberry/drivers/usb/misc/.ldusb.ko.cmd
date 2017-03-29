cmd_drivers/usb/misc/ldusb.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/ldusb.ko drivers/usb/misc/ldusb.o drivers/usb/misc/ldusb.mod.o
