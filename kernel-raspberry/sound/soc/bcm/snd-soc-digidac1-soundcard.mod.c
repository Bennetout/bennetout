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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9ce65b56, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x7acf6704, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1e690985, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0xce701b83, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x9b2b9079, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x58471639, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd213fe5e, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x7c2f217, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x52432ae1, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x4355872e, __VMLINUX_SYMBOL_STR(snd_soc_get_pcm_runtime) },
	{ 0xd9d73e8d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0x22b921cd, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x9e6cd626, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_clkdiv) },
	{ 0xa1abec75, __VMLINUX_SYMBOL_STR(snd_ctl_remove) },
	{ 0x4b2ffc1b, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x26fdfec9, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4b92324d, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x1011c8a9, __VMLINUX_SYMBOL_STR(snd_soc_card_get_kcontrol) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard*");

MODULE_INFO(srcversion, "570B7AA97968EA2A72519EB");
