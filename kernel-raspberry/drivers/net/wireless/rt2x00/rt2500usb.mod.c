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
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2cce96a9, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x2b218678, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xd8f30ca5, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xefe22061, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xee8cc2e6, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xe6b04250, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xcd692df, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x9d17dd8f, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xc62b9b06, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x9afb7ea3, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x955cacad, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x2f95c1cb, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x5d21aaf3, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x6f4a7087, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x9813d17, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x8aa765e, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x3ac9bfb, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x6ef3edfe, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x312b82fe, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x2b37d3d8, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0xcbb0238a, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x6cc1f82c, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xd6a6319b, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xcdbff5d9, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xeeda8f93, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xe40b7d04, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x1a3e796, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xa92d7757, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x3c23f224, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa9312ec, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x532e8edd, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6ad19c2a, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1f9d0e3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x68f78967, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x97eb21a, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B90FF814E9ED16BAB14799");
