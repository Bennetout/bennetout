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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x10340c32, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbbd226d, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0xfd1c8ce2, __VMLINUX_SYMBOL_STR(gspca_expo_autogain) },
	{ 0x1ce164b6, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb9f43101, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x95bfef2b, __VMLINUX_SYMBOL_STR(gspca_coarse_grained_expo_autogain) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x74ca77af, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9b66b765, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16cda798, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v046DpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0502pD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5pD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5pD800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0728pD001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "72D423E4D61A5D042137A93");