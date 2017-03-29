cmd_fs/nilfs2/nilfs2.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o fs/nilfs2/nilfs2.ko fs/nilfs2/nilfs2.o fs/nilfs2/nilfs2.mod.o
