cmd_drivers/w1/wire.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/w1/wire.ko drivers/w1/wire.o drivers/w1/wire.mod.o
