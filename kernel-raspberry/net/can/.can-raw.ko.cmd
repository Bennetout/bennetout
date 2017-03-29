cmd_net/can/can-raw.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/can/can-raw.ko net/can/can-raw.o net/can/can-raw.mod.o
