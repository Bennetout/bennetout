cmd_net/wimax/wimax.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o
