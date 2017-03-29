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
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6323281b, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x42eefacb, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xce701b83, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x57ef78e5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x9b2b9079, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5f29e512, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_mask64) },
	{ 0x40c5ed00, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x52432ae1, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xbe40dc43, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x33802b8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x32e1cb9e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xc302df98, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x227efb86, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4349f901, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x4d291cd7, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xa579d511, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "4101675D26F3B421F02F3C6");
