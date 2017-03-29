cmd_crypto/cast_common.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/cast_common.ko crypto/cast_common.o crypto/cast_common.mod.o
