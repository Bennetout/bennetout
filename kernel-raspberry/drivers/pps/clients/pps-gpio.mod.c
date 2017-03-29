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
	{ 0x92df742, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xd8500d20, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6cc72d94, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x5bdb1b5c, __VMLINUX_SYMBOL_STR(pps_register_source) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa05e87ce, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xc7b404e6, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x429651bb, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd030bef7, __VMLINUX_SYMBOL_STR(pps_event) },
	{ 0x49770f06, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x788c2bf1, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6ea6aa4b, __VMLINUX_SYMBOL_STR(pps_unregister_source) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";

MODULE_ALIAS("of:N*T*Cpps-gpio*");

MODULE_INFO(srcversion, "D2C22B0A465DA63746EFB59");
