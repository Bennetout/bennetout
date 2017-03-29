cmd_net/802/garp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/802/garp.ko net/802/garp.o net/802/garp.mod.o
