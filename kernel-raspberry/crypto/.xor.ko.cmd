cmd_crypto/xor.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/xor.ko crypto/xor.o crypto/xor.mod.o
