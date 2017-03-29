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
	{ 0xfe32ace7, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x9ad2403e, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x43a2d997, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfcdbb023, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xb19d9026, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0x6963f0cf, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x24343525, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x4113736c, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xb975e4b7, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x732dca4f, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x83200b91, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0x682362f4, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4D3693DEBAE273EBE6BC97C");
