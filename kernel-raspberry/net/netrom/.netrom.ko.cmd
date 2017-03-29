cmd_net/netrom/netrom.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netrom/netrom.ko net/netrom/netrom.o net/netrom/netrom.mod.o
