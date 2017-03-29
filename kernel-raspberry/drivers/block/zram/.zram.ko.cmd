cmd_drivers/block/zram/zram.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/block/zram/zram.ko drivers/block/zram/zram.o drivers/block/zram/zram.mod.o
