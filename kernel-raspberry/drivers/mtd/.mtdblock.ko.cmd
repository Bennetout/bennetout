cmd_drivers/mtd/mtdblock.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/mtd/mtdblock.ko drivers/mtd/mtdblock.o drivers/mtd/mtdblock.mod.o
