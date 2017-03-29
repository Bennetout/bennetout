cmd_net/ipv4/tunnel4.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/ipv4/tunnel4.ko net/ipv4/tunnel4.o net/ipv4/tunnel4.mod.o
