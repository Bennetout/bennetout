cmd_crypto/jitterentropy_rng.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/jitterentropy_rng.ko crypto/jitterentropy_rng.o crypto/jitterentropy_rng.mod.o
