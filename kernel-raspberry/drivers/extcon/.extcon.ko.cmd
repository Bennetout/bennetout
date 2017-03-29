cmd_drivers/extcon/extcon.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/extcon/extcon.ko drivers/extcon/extcon.o drivers/extcon/extcon.mod.o
