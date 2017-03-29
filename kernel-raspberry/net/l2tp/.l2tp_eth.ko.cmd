cmd_net/l2tp/l2tp_eth.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/l2tp/l2tp_eth.ko net/l2tp/l2tp_eth.o net/l2tp/l2tp_eth.mod.o
