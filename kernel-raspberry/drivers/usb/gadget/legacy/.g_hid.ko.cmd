cmd_drivers/usb/gadget/legacy/g_hid.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/usb/gadget/legacy/g_hid.ko drivers/usb/gadget/legacy/g_hid.o drivers/usb/gadget/legacy/g_hid.mod.o