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
	{ 0xd402a6b8, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4b731dab, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xead8c526, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x4d16e948, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xab43bfe6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x20229b02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2dfe2b79, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9e4b07a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xa8d132dd, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9f1fbf10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa8329b1a, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x130ef5a8, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x885a4b70, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x22bfada5, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xa5338e93, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xe53904cc, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xd0b96b61, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdae749ba, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x229b8d46, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3f95e7e2, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf8aa6fb5, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf8048a0b, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb2582bf7, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x63ca221e, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9e1f4f32, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xacc40d6d, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x37ecf6c1, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcbacdb3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2fd31cef, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DEE61F1C4243E64EAAD562");
