cmd_crypto/md5.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/md5.ko crypto/md5.o crypto/md5.mod.o
