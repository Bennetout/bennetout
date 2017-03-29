cmd_drivers/net/vxlan.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/vxlan.ko drivers/net/vxlan.o drivers/net/vxlan.mod.o
