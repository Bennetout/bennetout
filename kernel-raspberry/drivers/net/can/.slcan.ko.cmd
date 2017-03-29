cmd_drivers/net/can/slcan.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/can/slcan.ko drivers/net/can/slcan.o drivers/net/can/slcan.mod.o
