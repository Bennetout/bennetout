cmd_drivers/bluetooth/btusb.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/btusb.ko drivers/bluetooth/btusb.o drivers/bluetooth/btusb.mod.o
