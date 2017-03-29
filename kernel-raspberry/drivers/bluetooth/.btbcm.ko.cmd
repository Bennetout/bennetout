cmd_drivers/bluetooth/btbcm.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/bluetooth/btbcm.ko drivers/bluetooth/btbcm.o drivers/bluetooth/btbcm.mod.o
