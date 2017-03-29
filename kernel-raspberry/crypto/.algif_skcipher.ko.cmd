cmd_crypto/algif_skcipher.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/algif_skcipher.ko crypto/algif_skcipher.o crypto/algif_skcipher.mod.o
