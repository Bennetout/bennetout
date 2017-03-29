cmd_crypto/deflate.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/deflate.ko crypto/deflate.o crypto/deflate.mod.o
