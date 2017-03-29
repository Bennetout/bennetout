cmd_crypto/cmac.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/cmac.ko crypto/cmac.o crypto/cmac.mod.o
