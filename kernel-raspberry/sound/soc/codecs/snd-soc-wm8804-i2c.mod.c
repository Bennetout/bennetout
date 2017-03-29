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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xfe64ac8e, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xf717f15f, __VMLINUX_SYMBOL_STR(wm8804_probe) },
	{ 0x4970f4c9, __VMLINUX_SYMBOL_STR(wm8804_regmap_config) },
	{ 0x2d19d1d7, __VMLINUX_SYMBOL_STR(wm8804_remove) },
	{ 0xb60948fc, __VMLINUX_SYMBOL_STR(wm8804_pm) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-i2c,snd-soc-wm8804";

MODULE_ALIAS("of:N*T*Cwlf,wm8804*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "777EC82E64FB05E63C4301D");
