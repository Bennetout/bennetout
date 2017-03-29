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
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8d58af6c, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x6cc72d94, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfe64ac8e, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x46781896, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0x38db3a90, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x57ef78e5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8e0f47d7, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-i2c";

MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("of:N*T*Cisl,isl12057*");
MODULE_ALIAS("of:N*T*Cisil,isl12057*");

MODULE_INFO(srcversion, "CB897CD11E115760B3AA786");
