cmd_net/ipv4/udp_tunnel.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/ipv4/udp_tunnel.ko net/ipv4/udp_tunnel.o net/ipv4/udp_tunnel.mod.o
