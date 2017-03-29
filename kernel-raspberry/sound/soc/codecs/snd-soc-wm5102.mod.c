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
	{ 0x4b424807, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0x290520cd, __VMLINUX_SYMBOL_STR(wm_adsp2_event) },
	{ 0x431e3a62, __VMLINUX_SYMBOL_STR(arizona_lhpf4_mode) },
	{ 0x20a871e1, __VMLINUX_SYMBOL_STR(arizona_set_fll) },
	{ 0x93f40d12, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xfc8234b5, __VMLINUX_SYMBOL_STR(arizona_lhpf_coeff_put) },
	{ 0x708a46bd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1021068b, __VMLINUX_SYMBOL_STR(snd_soc_unregister_platform) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb24c7d10, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x800d86d8, __VMLINUX_SYMBOL_STR(arizona_init_dai) },
	{ 0xa3b63c0a, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xcd331720, __VMLINUX_SYMBOL_STR(arizona_in_ev) },
	{ 0x2e9b06c7, __VMLINUX_SYMBOL_STR(dapm_regulator_event) },
	{ 0x112615c5, __VMLINUX_SYMBOL_STR(arizona_lhpf1_mode) },
	{ 0x729a5ef3, __VMLINUX_SYMBOL_STR(arizona_mixer_values) },
	{ 0x30abdbdf, __VMLINUX_SYMBOL_STR(wm_adsp_compr_set_params) },
	{ 0xc2c66980, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xc56b7ffc, __VMLINUX_SYMBOL_STR(regmap_write_async) },
	{ 0x3f97c2ba, __VMLINUX_SYMBOL_STR(arizona_dvfs_down) },
	{ 0xc13eae36, __VMLINUX_SYMBOL_STR(wm_adsp_compr_trigger) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf2283f46, __VMLINUX_SYMBOL_STR(wm_adsp2_codec_probe) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3a59f97, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xe6b54313, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x6b73628d, __VMLINUX_SYMBOL_STR(arizona_init_dvfs) },
	{ 0xf52d0767, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x68f53d46, __VMLINUX_SYMBOL_STR(wm_adsp2_init) },
	{ 0xf279f4c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3cb78d7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x97332ec, __VMLINUX_SYMBOL_STR(wm_adsp_compr_free) },
	{ 0xb53d9e07, __VMLINUX_SYMBOL_STR(arizona_dvfs_up) },
	{ 0xea82e451, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw_range) },
	{ 0xe146c45f, __VMLINUX_SYMBOL_STR(wm_adsp_compr_open) },
	{ 0xb786e586, __VMLINUX_SYMBOL_STR(wm_adsp2_codec_remove) },
	{ 0xc9c29637, __VMLINUX_SYMBOL_STR(arizona_mixer_tlv) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfb7333e0, __VMLINUX_SYMBOL_STR(arizona_out_ev) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa0521e9e, __VMLINUX_SYMBOL_STR(arizona_adsp2_rate_controls) },
	{ 0x2801e15, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw_range) },
	{ 0x80a7c782, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info) },
	{ 0xc176c520, __VMLINUX_SYMBOL_STR(arizona_init_spk) },
	{ 0x3b0c6521, __VMLINUX_SYMBOL_STR(arizona_hp_ev) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x87c2002f, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw_range) },
	{ 0xc342b21f, __VMLINUX_SYMBOL_STR(wm_adsp_compr_copy) },
	{ 0x328eba85, __VMLINUX_SYMBOL_STR(arizona_simple_dai_ops) },
	{ 0xd81eed42, __VMLINUX_SYMBOL_STR(wm_adsp_compr_get_caps) },
	{ 0xa5ea503c, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0xff3e571d, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x86b904ec, __VMLINUX_SYMBOL_STR(arizona_lhpf3_mode) },
	{ 0x21a90077, __VMLINUX_SYMBOL_STR(arizona_out_vi_ramp) },
	{ 0x72c3b9ca, __VMLINUX_SYMBOL_STR(arizona_isrc_fsl) },
	{ 0x66adb8b2, __VMLINUX_SYMBOL_STR(arizona_in_vi_ramp) },
	{ 0xf2a9e8d5, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xb6c0b65f, __VMLINUX_SYMBOL_STR(arizona_dai_ops) },
	{ 0x7f26f273, __VMLINUX_SYMBOL_STR(arizona_mixer_texts) },
	{ 0xb2f6db35, __VMLINUX_SYMBOL_STR(arizona_init_fll) },
	{ 0x365c077b, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xd40326c2, __VMLINUX_SYMBOL_STR(snd_soc_register_platform) },
	{ 0x64f6d1e7, __VMLINUX_SYMBOL_STR(arizona_set_fll_refclk) },
	{ 0xb7a092b5, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x44fba33b, __VMLINUX_SYMBOL_STR(arizona_init_gpio) },
	{ 0x336b1991, __VMLINUX_SYMBOL_STR(arizona_dvfs_sysclk_ev) },
	{ 0x407e61b7, __VMLINUX_SYMBOL_STR(arizona_out_vd_ramp) },
	{ 0x77ad972, __VMLINUX_SYMBOL_STR(arizona_in_vd_ramp) },
	{ 0x9fe90cab, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x804fe9e5, __VMLINUX_SYMBOL_STR(arizona_eq_coeff_put) },
	{ 0x3c1a5264, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x4e2e9c5d, __VMLINUX_SYMBOL_STR(wm_adsp2_remove) },
	{ 0x63d63d56, __VMLINUX_SYMBOL_STR(arizona_free_spk) },
	{ 0xfb15d5fa, __VMLINUX_SYMBOL_STR(snd_soc_bytes_get) },
	{ 0xea4b7c91, __VMLINUX_SYMBOL_STR(arizona_set_sysclk) },
	{ 0xdafc521b, __VMLINUX_SYMBOL_STR(wm_adsp2_early_event) },
	{ 0x2f18154d, __VMLINUX_SYMBOL_STR(arizona_ng_hold) },
	{ 0x69c41fcb, __VMLINUX_SYMBOL_STR(snd_soc_new_compress) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7cf3dd4b, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0x161c7020, __VMLINUX_SYMBOL_STR(wm_adsp_compr_handle_irq) },
	{ 0x5aa7ca32, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc711dfc1, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info_ext) },
	{ 0xc9b302bc, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa910ef89, __VMLINUX_SYMBOL_STR(wm_adsp_compr_pointer) },
	{ 0xa3dc04ea, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
	{ 0x20ce0f58, __VMLINUX_SYMBOL_STR(arizona_lhpf2_mode) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-wm-adsp,snd-soc-arizona,snd-soc-core";


MODULE_INFO(srcversion, "FCDEDE1DF3149D12C10571F");
