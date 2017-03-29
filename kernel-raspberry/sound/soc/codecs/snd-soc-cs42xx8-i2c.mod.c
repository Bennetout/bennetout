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
	{ 0x245c4f2, __VMLINUX_SYMBOL_STR(cs42xx8_of_match) },
	{ 0x93f40d12, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x708a46bd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x19b49fc8, __VMLINUX_SYMBOL_STR(cs42xx8_probe) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x256a0bb5, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfc29b8a2, __VMLINUX_SYMBOL_STR(cs42xx8_pm) },
	{ 0xf7508cef, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x7cac7292, __VMLINUX_SYMBOL_STR(cs42888_data) },
	{ 0xcd3794c9, __VMLINUX_SYMBOL_STR(cs42448_data) },
	{ 0x240b291f, __VMLINUX_SYMBOL_STR(cs42xx8_regmap_config) },
	{ 0x365c077b, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x6042af58, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xb7a092b5, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-cs42xx8,snd-soc-core";

MODULE_ALIAS("i2c:cs42448");
MODULE_ALIAS("i2c:cs42888");

MODULE_INFO(srcversion, "E7613249192D154DDCADABF");
