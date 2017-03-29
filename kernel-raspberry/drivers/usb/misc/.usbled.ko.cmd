cmd_drivers/usb/misc/usbled.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/usbled.ko drivers/usb/misc/usbled.o drivers/usb/misc/usbled.mod.o
