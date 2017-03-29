cmd_drivers/spi/spi-bcm2835.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/spi/spi-bcm2835.ko drivers/spi/spi-bcm2835.o drivers/spi/spi-bcm2835.mod.o
