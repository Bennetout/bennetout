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
	{ 0x4bf8d373, __VMLINUX_SYMBOL_STR(deregister_mtd_parser) },
	{ 0x2845ab25, __VMLINUX_SYMBOL_STR(register_mtd_parser) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3f44f332, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xdb1989f, __VMLINUX_SYMBOL_STR(of_n_size_cells) },
	{ 0x57eee0b8, __VMLINUX_SYMBOL_STR(of_n_addr_cells) },
	{ 0xb85cec78, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xf6b177aa, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x886ac163, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92df742, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "8A8D4C2B93CB54F2BDA20C6");
