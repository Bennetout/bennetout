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
	{ 0xdf5f2a70, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x843dc160, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x303196c6, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x4b9d959f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf32c16d6, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x431e775c, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x58975780, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x39e72a7d, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbc7581a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x77f1baf, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x48530ab5, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x9962f956, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9648d4fe, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "F8DB013C275DE0C19FEB0C9");
