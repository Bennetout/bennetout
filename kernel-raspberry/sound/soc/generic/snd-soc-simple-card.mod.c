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
	{ 0x71bacec5, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2b1de13d, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x4e6d3b5f, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7677586, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0xa22cf6b, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x886ac163, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xb85cec78, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xd8500d20, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x3450ac4c, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0x4b2ffc1b, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x91680051, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xd8d46160, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0xf15d809a, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x7c5c2f28, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0x8038c859, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0xbd2ea76c, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe9e80dbf, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3f44f332, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2f13a3c8, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card*");

MODULE_INFO(srcversion, "B64E4FE8C90DFC2B5562509");
