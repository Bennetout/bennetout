cmd_net/mpls/mpls_gso.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/mpls/mpls_gso.ko net/mpls/mpls_gso.o net/mpls/mpls_gso.mod.o
