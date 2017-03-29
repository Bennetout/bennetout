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
	{ 0xfd27b555, __VMLINUX_SYMBOL_STR(dibusb_read_eeprom_byte) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe5a8ef3, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x6204c7b8, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9b04d573, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xba96caf9, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x7a446888, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x2415792a, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0x50c1412d, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x40000904, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe6f1b3d4, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0xa041e524, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb7f76ace, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x86c279f9, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB8A5BFD66BFDCED2C327BD");
