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
	{ 0xaacd4217, __VMLINUX_SYMBOL_STR(regulator_get_bypass_regmap) },
	{ 0x954bc06e, __VMLINUX_SYMBOL_STR(regulator_set_bypass_regmap) },
	{ 0xb3412f14, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0xdc3544d3, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0x88ea41d9, __VMLINUX_SYMBOL_STR(regulator_map_voltage_linear) },
	{ 0xe9bd6528, __VMLINUX_SYMBOL_STR(regulator_list_voltage_linear) },
	{ 0x5aa7ca32, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf279f4c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc392d953, __VMLINUX_SYMBOL_STR(of_get_regulator_init_data) },
	{ 0x7c418065, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xbd204ea5, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xa1b994a, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xed725c5f, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xd6d75aa7, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa3b63c0a, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xe6b54313, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb98a0a23, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "16BDEF1C99AFFF9CD68B897");
