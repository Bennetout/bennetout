cmd_drivers/block/cryptoloop.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/block/cryptoloop.ko drivers/block/cryptoloop.o drivers/block/cryptoloop.mod.o
