cmd_drivers/net/veth.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/veth.ko drivers/net/veth.o drivers/net/veth.mod.o
