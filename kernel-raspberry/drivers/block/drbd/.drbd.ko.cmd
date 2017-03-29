cmd_drivers/block/drbd/drbd.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/block/drbd/drbd.ko drivers/block/drbd/drbd.o drivers/block/drbd/drbd.mod.o
