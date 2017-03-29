cmd_crypto/async_tx/async_tx.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/async_tx/async_tx.ko crypto/async_tx/async_tx.o crypto/async_tx/async_tx.mod.o
