cmd_drivers/net/netconsole.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/netconsole.ko drivers/net/netconsole.o drivers/net/netconsole.mod.o
