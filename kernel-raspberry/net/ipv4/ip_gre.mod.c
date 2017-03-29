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
	{ 0x23f9af32, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4f539d58, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x1c51537, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x8aee3b62, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x36cfd51e, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xc2278a94, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xc385d8b3, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbf3273e2, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xe0fec689, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc23e894, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xd27403f4, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xf4bab677, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x403a6482, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x6e0c7995, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xffffad3e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd453ae8e, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2d1dd7c1, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x77fc1a39, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xa8c72321, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x6b05e37, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x6309ca8f, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf8d9277f, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x7f1a4f31, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xf61f43f6, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe26d7ff, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb14fc203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x798df79f, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x9a89950, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xa18571d6, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x6c3a47cb, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x16a5e4e4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x16e55cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x77b5458b, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xe4c8a692, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x8c951973, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x20fee7c0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x9e3158da, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0x603ef366, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


MODULE_INFO(srcversion, "93171AC312FA3A4DF1B714B");
