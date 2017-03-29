cmd_fs/9p/9p.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/9p/9p.ko fs/9p/9p.o fs/9p/9p.mod.o
