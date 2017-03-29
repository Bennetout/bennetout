cmd_drivers/md/md-mod.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/md-mod.ko drivers/md/md-mod.o drivers/md/md-mod.mod.o
