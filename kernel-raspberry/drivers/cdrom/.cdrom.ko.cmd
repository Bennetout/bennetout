cmd_drivers/cdrom/cdrom.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/cdrom/cdrom.ko drivers/cdrom/cdrom.o drivers/cdrom/cdrom.mod.o
