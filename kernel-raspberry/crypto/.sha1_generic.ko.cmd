cmd_crypto/sha1_generic.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/sha1_generic.ko crypto/sha1_generic.o crypto/sha1_generic.mod.o
