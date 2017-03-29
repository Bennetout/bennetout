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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe9e06ca6, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xd402a6b8, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdaf2d7b8, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0x3060877d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa615a55e, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xafd1ecb1, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xa5827ec3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x42964f16, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xe2e26504, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x3f95e7e2, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4d16e948, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x819ecbae, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5417e3f2, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa8d132dd, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5c18c00e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x864dce86, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x20229b02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcbacdb3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x175f908b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x71f1887d, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x35a6b6b3, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x84542206, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x6dca9878, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8a5f5e5d, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xab43bfe6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9f1fbf10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x85c93c3c, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x5be29f6a, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x229b8d46, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x2fd31cef, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf9e4b07a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x7b0ada1e, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x37ecf6c1, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211";

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "B6B4236EB66DC20B33F8A70");
