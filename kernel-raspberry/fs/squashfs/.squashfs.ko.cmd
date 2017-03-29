cmd_fs/squashfs/squashfs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/squashfs/squashfs.ko fs/squashfs/squashfs.o fs/squashfs/squashfs.mod.o
