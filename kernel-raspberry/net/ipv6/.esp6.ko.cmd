cmd_net/ipv6/esp6.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/ipv6/esp6.ko net/ipv6/esp6.o net/ipv6/esp6.mod.o
