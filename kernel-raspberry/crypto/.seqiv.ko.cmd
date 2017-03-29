cmd_crypto/seqiv.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o
