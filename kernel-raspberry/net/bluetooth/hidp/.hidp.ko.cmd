cmd_net/bluetooth/hidp/hidp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/bluetooth/hidp/hidp.ko net/bluetooth/hidp/hidp.o net/bluetooth/hidp/hidp.mod.o
