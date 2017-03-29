cmd_net/nfc/nfc.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o
