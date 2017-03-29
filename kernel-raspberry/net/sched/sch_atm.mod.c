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
	{ 0xdd4c2438, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x5f91e0ab, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4fbe18cf, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa5827ec3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xa2b7188f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x46f30d2a, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x887b6469, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x452501e, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c18c00e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5be29f6a, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6b2f8ad4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x864dce86, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa80fc9f6, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xf63ac645, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0xd7dd724c, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x7988109e, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc62759ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf6424471, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x140fb2cf, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "650D87769E7CE39F9E60D99");
