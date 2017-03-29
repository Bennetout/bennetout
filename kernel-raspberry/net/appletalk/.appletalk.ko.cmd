cmd_net/appletalk/appletalk.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/appletalk/appletalk.ko net/appletalk/appletalk.o net/appletalk/appletalk.mod.o
