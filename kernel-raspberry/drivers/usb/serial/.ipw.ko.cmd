cmd_drivers/usb/serial/ipw.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/ipw.ko drivers/usb/serial/ipw.o drivers/usb/serial/ipw.mod.o
