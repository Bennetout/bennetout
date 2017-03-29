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
	{ 0x66011d44, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x70a58241, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0x4844e6bc, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xc9f8a8ad, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x5aa7ca32, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xed725c5f, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xefbecc7d, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cfe-pi,fe-pi-audio");
MODULE_ALIAS("of:N*T*Cfe-pi,fe-pi-audioC*");

MODULE_INFO(srcversion, "CB029D7809C3A8DA23C4B2B");
