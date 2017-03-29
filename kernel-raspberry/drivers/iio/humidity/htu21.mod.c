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
	{ 0xe9520571, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8beb335e, __VMLINUX_SYMBOL_STR(ms_sensors_show_battery_low) },
	{ 0xf9d6d49e, __VMLINUX_SYMBOL_STR(ms_sensors_show_heater) },
	{ 0x9c4480cc, __VMLINUX_SYMBOL_STR(ms_sensors_write_heater) },
	{ 0x62a84488, __VMLINUX_SYMBOL_STR(ms_sensors_ht_read_temperature) },
	{ 0xb52d73d4, __VMLINUX_SYMBOL_STR(ms_sensors_ht_read_humidity) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x731d9da9, __VMLINUX_SYMBOL_STR(ms_sensors_write_resolution) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xaae313e8, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd54c3be6, __VMLINUX_SYMBOL_STR(ms_sensors_read_serial) },
	{ 0xc77b421f, __VMLINUX_SYMBOL_STR(ms_sensors_reset) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9962d5f2, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ms_sensors_i2c";


MODULE_INFO(srcversion, "7CE26DAB272D7A3F00E627C");
