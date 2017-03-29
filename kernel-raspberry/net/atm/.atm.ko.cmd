cmd_net/atm/atm.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/atm/atm.ko net/atm/atm.o net/atm/atm.mod.o
