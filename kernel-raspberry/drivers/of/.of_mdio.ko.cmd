cmd_drivers/of/of_mdio.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/of/of_mdio.ko drivers/of/of_mdio.o drivers/of/of_mdio.mod.o
