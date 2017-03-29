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
	{ 0x2ccf016, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xafd1ecb1, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xc1d82459, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x2a50357e, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x3757c4af, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x60d47dbb, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x2896d909, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xa44eaa6a, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xbe92b607, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x320310ee, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xadd54126, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x64498603, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x842c81da, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x55f2632b, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x4d8fcdab, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x678d9c42, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x172ee3c7, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x682cd68b, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa6268649, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x1fb25031, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xf6709821, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xbd9b3497, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0xd97fd2f2, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xd1c86f58, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x8eaa3cc0, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x5cb3f13c, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0xefb0df91, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x6ffe7baa, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x6f1e63af, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x136b38f5, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x86a9aab4, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x4d16e948, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xab43bfe6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x20229b02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x984fa652, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x2d360e22, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa09c7a96, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x5be29f6a, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xcbacdb3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c18c00e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa5827ec3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4cc4d19c, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xf65cf069, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
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

MODULE_INFO(srcversion, "E9AC6BB9CE0D2E8FDD62219");
