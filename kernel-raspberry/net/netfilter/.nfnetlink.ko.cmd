cmd_net/netfilter/nfnetlink.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/netfilter/nfnetlink.ko net/netfilter/nfnetlink.o net/netfilter/nfnetlink.mod.o
