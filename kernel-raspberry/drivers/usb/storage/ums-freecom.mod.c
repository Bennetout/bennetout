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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x73c6352b, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0xfe32ace7, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xe592b520, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9ad2403e, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfcdbb023, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6963f0cf, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x24343525, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x4113736c, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xb975e4b7, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x732dca4f, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x682362f4, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2c987fea, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "03B464CB478E47B9DE27D52");
