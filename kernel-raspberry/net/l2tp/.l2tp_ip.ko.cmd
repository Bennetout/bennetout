cmd_net/l2tp/l2tp_ip.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/l2tp/l2tp_ip.ko net/l2tp/l2tp_ip.o net/l2tp/l2tp_ip.mod.o
