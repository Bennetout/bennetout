cmd_drivers/mtd/nand/nand.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/mtd/nand/nand.ko drivers/mtd/nand/nand.o drivers/mtd/nand/nand.mod.o
