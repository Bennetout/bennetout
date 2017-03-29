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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf3d7f48d, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x7acf6704, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x320b53a8, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xce701b83, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9b2b9079, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xe8931bf3, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x40c5ed00, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd213fe5e, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x52432ae1, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xfe64ac8e, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xe09d9059, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x227efb86, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4d291cd7, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7f88989, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,regmap-spi,snd-soc-core,regmap-i2c";

MODULE_ALIAS("of:N*T*Cwlf,wm8741*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "36FA8426E6ED744FAC0CD69");
