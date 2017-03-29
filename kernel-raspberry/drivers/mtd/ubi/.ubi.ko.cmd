cmd_drivers/mtd/ubi/ubi.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/mtd/ubi/ubi.ko drivers/mtd/ubi/ubi.o drivers/mtd/ubi/ubi.mod.o
