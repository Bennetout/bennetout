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
	{ 0x5e2e3b4, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x8ab6b2c6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb68c9d19, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x788c2bf1, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x2a6e556, __VMLINUX_SYMBOL_STR(devm_sigmadsp_init_i2c) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xce701b83, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x57ef78e5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x9b2b9079, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x610ca211, __VMLINUX_SYMBOL_STR(sigmadsp_attach) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa51e532f, __VMLINUX_SYMBOL_STR(sigmadsp_reset) },
	{ 0xdbdba974, __VMLINUX_SYMBOL_STR(sigmadsp_setup) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1a5b5fb5, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x52432ae1, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xff3c3504, __VMLINUX_SYMBOL_STR(sigmadsp_restrict_params) },
	{ 0xb6670622, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0xd8500d20, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xe09d9059, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x33802b8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcc133271, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x227efb86, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4349f901, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x4d291cd7, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp";

MODULE_ALIAS("of:N*T*Cadi,adau1701*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "7F1AFBD3E3E2098D40140FF");
