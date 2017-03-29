cmd_drivers/i2c/i2c-dev.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/i2c/i2c-dev.ko drivers/i2c/i2c-dev.o drivers/i2c/i2c-dev.mod.o
