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
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x31336c46, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xcceba8f8, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x2454cd49, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x9b2fc82b, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x54c0b08c, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf3029433, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb067e857, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x924d9a2c, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x984df1ca, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x164923d2, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x12fb31b1, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x28925088, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xfa3c8db1, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xe4a6950d, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x45576310, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe821b85b, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xa41299b8, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xb3ef50c3, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x9962f956, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x77f1baf, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x5e8762ca, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xb2c27722, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x6ca1d1a4, __VMLINUX_SYMBOL_STR(atomic64_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x57be2376, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x22374a5d, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";


MODULE_INFO(srcversion, "CBE976C99267ADDF314F7A8");
