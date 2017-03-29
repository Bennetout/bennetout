cmd_net/can/can-bcm.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/can/can-bcm.ko net/can/can-bcm.o net/can/can-bcm.mod.o
