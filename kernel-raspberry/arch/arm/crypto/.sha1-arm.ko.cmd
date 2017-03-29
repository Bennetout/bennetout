cmd_arch/arm/crypto/sha1-arm.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o arch/arm/crypto/sha1-arm.ko arch/arm/crypto/sha1-arm.o arch/arm/crypto/sha1-arm.mod.o
