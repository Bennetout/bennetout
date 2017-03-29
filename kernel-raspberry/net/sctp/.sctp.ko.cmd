cmd_net/sctp/sctp.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/sctp/sctp.ko net/sctp/sctp.o net/sctp/sctp.mod.o
