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
	{ 0x6a017d59, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xfe75bc3c, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x2696dd8c, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x102b65bf, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0xfca001c3, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x319a457f, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0xdef7a4f3, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x5d41648a, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x2d2202fc, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x41402fbf, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0xfe3ab98d, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x49bca2ee, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0x5cbce604, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x270fa528, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x6a782a8f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xdc18d0ec, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0xf185fb32, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xa6220931, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E02962EEFDA828DE8D2D298");
