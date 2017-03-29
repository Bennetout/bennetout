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
	{ 0x9ed92647, __VMLINUX_SYMBOL_STR(regulator_is_enabled_regmap) },
	{ 0xb3412f14, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0xdc3544d3, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0xfe37d14c, __VMLINUX_SYMBOL_STR(regulator_map_voltage_linear_range) },
	{ 0x4a4b5fc3, __VMLINUX_SYMBOL_STR(regulator_list_voltage_linear_range) },
	{ 0x5aa7ca32, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf279f4c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc392d953, __VMLINUX_SYMBOL_STR(of_get_regulator_init_data) },
	{ 0xbd204ea5, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xed725c5f, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xd6d75aa7, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0xa3b63c0a, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc9f8a8ad, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x98ffedc4, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0x3c1a5264, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xe6b54313, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x14760594, __VMLINUX_SYMBOL_STR(regulator_enable_regmap) },
	{ 0x6790138e, __VMLINUX_SYMBOL_STR(regulator_disable_regmap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x954bc06e, __VMLINUX_SYMBOL_STR(regulator_set_bypass_regmap) },
	{ 0xb98a0a23, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "D07E0516CCD354D88548A77");
