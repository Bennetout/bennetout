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
	{ 0xd27403f4, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x1c51537, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x4f539d58, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x8c951973, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xd453ae8e, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xf8d9277f, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xffffad3e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x87e99491, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x16e55cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x923c0353, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x23f9af32, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x798df79f, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xa8c72321, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x603ef366, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xf770972b, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x77b5458b, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe26d7ff, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xc2278a94, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xc385d8b3, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x6b05e37, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe0fec689, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x9a89950, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x7f1a4f31, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xc23e894, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x6e0c7995, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xf61f43f6, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xe4c8a692, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "9BD9E415A4147CE33434DF3");
