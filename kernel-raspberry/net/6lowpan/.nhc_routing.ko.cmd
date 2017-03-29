cmd_net/6lowpan/nhc_routing.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/6lowpan/nhc_routing.ko net/6lowpan/nhc_routing.o net/6lowpan/nhc_routing.mod.o
