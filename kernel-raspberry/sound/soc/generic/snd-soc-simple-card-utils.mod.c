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
	{ 0x69e18c32, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x95ee6359, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0x2d58d1a4, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0x4844e6bc, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x9e6476fb, __VMLINUX_SYMBOL_STR(devm_kvasprintf) },
	{ 0x900a315f, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0xff53922d, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x474dc61f, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9b7fefa8, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xed725c5f, __VMLINUX_SYMBOL_STR(of_node_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "FE092851FB06C3C193BC9AB");
