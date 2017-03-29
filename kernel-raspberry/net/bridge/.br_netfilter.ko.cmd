cmd_net/bridge/br_netfilter.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/bridge/br_netfilter.ko net/bridge/br_netfilter.o net/bridge/br_netfilter.mod.o
