cmd_net/6lowpan/nhc_udp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/6lowpan/nhc_udp.ko net/6lowpan/nhc_udp.o net/6lowpan/nhc_udp.mod.o
