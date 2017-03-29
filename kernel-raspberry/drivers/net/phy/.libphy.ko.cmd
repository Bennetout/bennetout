cmd_drivers/net/phy/libphy.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/phy/libphy.ko drivers/net/phy/libphy.o drivers/net/phy/libphy.mod.o
