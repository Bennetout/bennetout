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
	{ 0xc16876af, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x499aa2b4, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xcd1d5920, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x8aae157f, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x47d9afd9, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x8b83d1a9, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0xa467eba0, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xec874189, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0xe65effe, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_set";


MODULE_INFO(srcversion, "A05B0071AEE19EBE4E374E8");
