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
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x55bcad26, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x3311fb06, __VMLINUX_SYMBOL_STR(arizona_clk32k_enable) },
	{ 0xe8cb8f2e, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x597908e5, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x9aa115a6, __VMLINUX_SYMBOL_STR(gpiod_get_optional) },
	{ 0xa3c37a6f, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0x7092cea7, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x7fe9f383, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x1a5b5fb5, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x27b3125a, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x26900891, __VMLINUX_SYMBOL_STR(devm_extcon_dev_register) },
	{ 0xae07c059, __VMLINUX_SYMBOL_STR(devm_extcon_dev_allocate) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x10094dc2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc660acd3, __VMLINUX_SYMBOL_STR(extcon_get_cable_state_) },
	{ 0xc302df98, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xcc133271, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x788c2bf1, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x998a51a, __VMLINUX_SYMBOL_STR(extcon_update_state) },
	{ 0x7437d8eb, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x57ef78e5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x1db3cd93, __VMLINUX_SYMBOL_STR(extcon_set_cable_state_) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4349f901, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x7aab607e, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xe3ce7543, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0x1b4b507c, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd9f7b097, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x4393a853, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xbe7ff7a8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x31787c71, __VMLINUX_SYMBOL_STR(arizona_clk32k_disable) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x15f1add3, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0xa0c071a1, __VMLINUX_SYMBOL_STR(arizona_set_irq_wake) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x216b1265, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x6dd7c08c, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=extcon,snd-soc-core";


MODULE_INFO(srcversion, "01E31161C7FDFB072EC14F1");
