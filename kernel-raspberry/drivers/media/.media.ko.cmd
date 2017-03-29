cmd_drivers/media/media.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/media/media.ko drivers/media/media.o drivers/media/media.mod.o
