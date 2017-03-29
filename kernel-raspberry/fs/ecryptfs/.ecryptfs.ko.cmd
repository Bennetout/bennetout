cmd_fs/ecryptfs/ecryptfs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/ecryptfs/ecryptfs.ko fs/ecryptfs/ecryptfs.o fs/ecryptfs/ecryptfs.mod.o
