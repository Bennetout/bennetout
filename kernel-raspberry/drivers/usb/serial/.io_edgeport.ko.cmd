cmd_drivers/usb/serial/io_edgeport.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/io_edgeport.ko drivers/usb/serial/io_edgeport.o drivers/usb/serial/io_edgeport.mod.o