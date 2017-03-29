cmd_drivers/md/linear.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/linear.ko drivers/md/linear.o drivers/md/linear.mod.o
