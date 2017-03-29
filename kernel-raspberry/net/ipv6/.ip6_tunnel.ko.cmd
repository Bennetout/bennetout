cmd_net/ipv6/ip6_tunnel.ko := arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/ipv6/ip6_tunnel.ko net/ipv6/ip6_tunnel.o net/ipv6/ip6_tunnel.mod.o
