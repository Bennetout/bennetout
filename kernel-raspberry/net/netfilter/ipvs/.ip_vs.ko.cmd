cmd_net/netfilter/ipvs/ip_vs.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/ipvs/ip_vs.ko net/netfilter/ipvs/ip_vs.o net/netfilter/ipvs/ip_vs.mod.o
