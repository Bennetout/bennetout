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
	{ 0x55bcad26, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x6cc72d94, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x4c86c5f7, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x9421740, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xe8cb8f2e, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x597908e5, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x27b3125a, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc302df98, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xbe40dc43, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8ed5b348, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x9d42b63f, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x7437d8eb, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe0d17a88, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236*");

MODULE_INFO(srcversion, "880F4BA278DAAEDD37E802C");
