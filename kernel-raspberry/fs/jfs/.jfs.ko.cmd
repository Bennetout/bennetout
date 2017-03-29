cmd_fs/jfs/jfs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/jfs/jfs.ko fs/jfs/jfs.o fs/jfs/jfs.mod.o
