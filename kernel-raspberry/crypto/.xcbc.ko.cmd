cmd_crypto/xcbc.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/xcbc.ko crypto/xcbc.o crypto/xcbc.mod.o
