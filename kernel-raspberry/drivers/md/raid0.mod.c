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
	{ 0xe510aae6, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x5a8a2082, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x77c78409, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xf32c16d6, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x303196c6, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xdf5f2a70, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x843dc160, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x431e775c, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x58975780, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x48530ab5, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x9648d4fe, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x51484d4b, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xc9b0ada5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xfe5a2473, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xfce369e0, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xcd234607, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x39e72a7d, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x4b9d959f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "CC914DA066BE1DA2EB77A85");
