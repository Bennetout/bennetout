cmd_net/rose/rose.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o
