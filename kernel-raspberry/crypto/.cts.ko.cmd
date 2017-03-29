cmd_crypto/cts.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/cts.ko crypto/cts.o crypto/cts.mod.o
