cmd_crypto/ecb.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/ecb.ko crypto/ecb.o crypto/ecb.mod.o
