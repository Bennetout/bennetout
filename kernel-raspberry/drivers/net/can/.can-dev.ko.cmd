cmd_drivers/net/can/can-dev.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/can/can-dev.ko drivers/net/can/can-dev.o drivers/net/can/can-dev.mod.o
