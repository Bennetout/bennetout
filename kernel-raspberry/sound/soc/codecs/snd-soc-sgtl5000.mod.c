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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb24c7d10, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x256a0bb5, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa3b63c0a, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3a59f97, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xe6b54313, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xf52d0767, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x2771082f, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x3cb78d7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf5111840, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x66011d44, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x643d866f, __VMLINUX_SYMBOL_STR(regulator_bulk_get) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xff3e571d, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xf7508cef, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x20229b02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2ced1ef6, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6042af58, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xdca7f8c2, __VMLINUX_SYMBOL_STR(regulator_get_optional) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x7f494fce, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0xba6b4599, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xb7a092b5, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xbd8151e0, __VMLINUX_SYMBOL_STR(regulator_put) },
	{ 0x9de09d08, __VMLINUX_SYMBOL_STR(regulator_bulk_free) },
	{ 0x9b7fefa8, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xc9b302bc, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa8a75bfe, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x790710fb, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0xa3dc04ea, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("i2c:sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000");
MODULE_ALIAS("of:N*T*Cfsl,sgtl5000C*");

MODULE_INFO(srcversion, "3F82756556EDE642C3E0063");
