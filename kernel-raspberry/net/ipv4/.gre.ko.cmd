cmd_net/ipv4/gre.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o
