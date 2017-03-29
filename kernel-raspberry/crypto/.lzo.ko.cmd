cmd_crypto/lzo.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/lzo.ko crypto/lzo.o crypto/lzo.mod.o
