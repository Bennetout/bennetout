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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x4b424807, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b9a7fa4, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x96982421, __VMLINUX_SYMBOL_STR(snd_soc_dapm_del_routes) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a66f46d, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x58242969, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x26cef4ee, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb67f3ba5, __VMLINUX_SYMBOL_STR(regmap_multi_reg_write) },
	{ 0xa3b63c0a, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9ff1cdc4, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x680d90f1, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xe6b54313, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x7f0a1ae9, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x3cb78d7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x25c0f333, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf5111840, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6371e6b0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x66011d44, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x1e603b7a, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb1367e8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xa5ea503c, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0xff3e571d, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xf2a9e8d5, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x98ffedc4, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xf606e3fe, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x9fe90cab, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x3c1a5264, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x24aef0ac, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7cf3dd4b, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x417cf388, __VMLINUX_SYMBOL_STR(regmap_get_val_bytes) },
	{ 0xa8a75bfe, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x4063803a, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x790710fb, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "803779B967CB2989E63937E");
