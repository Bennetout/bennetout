cmd_net/key/af_key.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/key/af_key.ko net/key/af_key.o net/key/af_key.mod.o
