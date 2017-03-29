cmd_crypto/xts.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/xts.ko crypto/xts.o crypto/xts.mod.o
