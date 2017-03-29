cmd_drivers/bcma/bcma.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bcma/bcma.ko drivers/bcma/bcma.o drivers/bcma/bcma.mod.o
