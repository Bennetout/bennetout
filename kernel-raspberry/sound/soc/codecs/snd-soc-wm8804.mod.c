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
	{ 0x10094dc2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2ec64f14, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0x216b1265, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3c6b8535, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1b4b507c, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x57ef78e5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xe3ce7543, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0x58471639, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xa35efc14, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_dapm) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xe8931bf3, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd213fe5e, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7092cea7, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xf4aab2f3, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xe09d9059, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xbe40dc43, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x33802b8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xc302df98, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x227efb86, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x4349f901, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x4d291cd7, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7f88989, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "F8E491E0DF2DE73AA6839B1");
