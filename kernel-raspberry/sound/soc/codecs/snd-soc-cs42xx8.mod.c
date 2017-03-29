#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2ccf016, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa3b63c0a, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x7745fd5c, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xc2c66980, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9ff1cdc4, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x3a59f97, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xe6b54313, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xf52d0767, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x497a17c8, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x2771082f, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x3cb78d7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x25c0f333, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1d962063, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xff3e571d, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x20229b02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf2a9e8d5, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x2ced1ef6, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xba6b4599, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9fe90cab, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xc9b302bc, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa8a75bfe, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xe4735e38, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7f8663c9, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Ccirrus,cs42448");
MODULE_ALIAS("of:N*T*Ccirrus,cs42448C*");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888");
MODULE_ALIAS("of:N*T*Ccirrus,cs42888C*");

MODULE_INFO(srcversion, "2CF49B5F1FEE7E3ACDE59F8");
