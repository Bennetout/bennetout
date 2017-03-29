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
	{ 0x7d3bf404, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0xf15d8008, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x7515b442, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0x8b4bc5, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0x55b55153, __VMLINUX_SYMBOL_STR(task_cls_state) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe41ea266, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x189ac3db, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0x176fbbd5, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa59f8ed2, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0xe8214184, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x532d784b, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x472526c2, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0x1e214d7, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6733E4E66A92FEF2299AC9E");
