#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6309ca8f, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x1c51537, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x4f539d58, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x16e55cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x923c0353, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x23f9af32, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x124f12d7, __VMLINUX_SYMBOL_STR(__wait_rcu_gp) },
	{ 0xffffad3e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x87e99491, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xf8d9277f, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85e3cd02, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd3f1215a, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0x7915d94f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x4ebb9ca7, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x77fc1a39, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x3fd1b596, __VMLINUX_SYMBOL_STR(ip_tunnel_encap) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x433aca28, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0xf1cf45c4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xe0fec689, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x9a89950, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc0d034fb, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x603ef366, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xf770972b, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x77b5458b, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe26d7ff, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9cbc0048, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xdcc2de3e, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc2278a94, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x432d2b22, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0xb01093c, __VMLINUX_SYMBOL_STR(ip_tunnel_dst_reset_all) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x10eba855, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa18571d6, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xe4c8a692, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x70b6dfa3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x5e4862ee, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x95738e40, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "AAD7E2A3C023F3BEB887A94");
