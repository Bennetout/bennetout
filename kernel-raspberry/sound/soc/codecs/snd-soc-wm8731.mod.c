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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xf3d7f48d, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3c6b8535, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x542ae041, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x320b53a8, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xce701b83, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9b2b9079, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x58471639, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe8931bf3, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x40c5ed00, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd213fe5e, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa7d1c05, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x500692f4, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x52432ae1, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xfe64ac8e, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x4393a853, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0x38a89bb5, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe09d9059, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x33802b8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x227efb86, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4349f901, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x4d291cd7, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7f88989, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0xa05a3762, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,regmap-spi,snd-soc-core,snd,regmap-i2c";

MODULE_ALIAS("of:N*T*Cwlf,wm8731*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "D20EC421C371BDA0D272698");
