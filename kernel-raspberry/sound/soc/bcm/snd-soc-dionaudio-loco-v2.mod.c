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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7c418065, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf279f4c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9f1ff776, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x70a58241, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xa4572106, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf2ab3189, __VMLINUX_SYMBOL_STR(snd_soc_limit_volume) },
	{ 0x5aa7ca32, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xefbecc7d, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";

MODULE_ALIAS("of:N*T*Cdionaudio,dionaudio-loco-v2");
MODULE_ALIAS("of:N*T*Cdionaudio,dionaudio-loco-v2C*");

MODULE_INFO(srcversion, "4F1A2DC91A0C1AB7AFC74A6");
