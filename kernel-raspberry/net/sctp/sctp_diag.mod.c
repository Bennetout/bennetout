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
	{ 0x2ccf016, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd7df0e32, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x452f297a, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0xddd0bf31, __VMLINUX_SYMBOL_STR(sctp_for_each_endpoint) },
	{ 0xdde446e8, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xc47441, __VMLINUX_SYMBOL_STR(sctp_for_each_transport) },
	{ 0xacc40d6d, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x24f19009, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd558d31b, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6a1d23c9, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x61affb72, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x76e5d1b1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc15180b8, __VMLINUX_SYMBOL_STR(inet_diag_msg_common_fill) },
	{ 0xa5827ec3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2db3b502, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x6067164e, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd5f34226, __VMLINUX_SYMBOL_STR(inet_diag_msg_attrs_fill) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8b7b948a, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x315d2227, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xe77bd8fc, __VMLINUX_SYMBOL_STR(sctp_transport_lookup_process) },
	{ 0x348ed0dd, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe7848e62, __VMLINUX_SYMBOL_STR(sctp_get_sctp_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,sctp";


MODULE_INFO(srcversion, "4325078BE86000ECD4C4257");
