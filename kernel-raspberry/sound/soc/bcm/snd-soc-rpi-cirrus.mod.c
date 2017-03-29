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
	{ 0x62e70a15, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb24c7d10, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x7c418065, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xbfca97a4, __VMLINUX_SYMBOL_STR(snd_soc_codec_set_sysclk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf5e53136, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf279f4c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3cb78d7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xf5111840, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x66011d44, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x9ad33d29, __VMLINUX_SYMBOL_STR(snd_soc_codec_set_pll) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x342c091f, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x231787f2, __VMLINUX_SYMBOL_STR(snd_soc_get_pcm_runtime) },
	{ 0xa4572106, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x5371f198, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_clkdiv) },
	{ 0x4844e6bc, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xeb8cd6d8, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x474dc61f, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x5aa7ca32, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xa3dc04ea, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd,snd-pcm";

MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrus");
MODULE_ALIAS("of:N*T*Cwlf,rpi-cirrusC*");

MODULE_INFO(srcversion, "8D6F95864705FF5090C0C9D");
