#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2ccf016, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa195ec0d, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x9e1f4f32, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x9a783741, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2e26504, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb831f948, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0x896930ad, __VMLINUX_SYMBOL_STR(rt2x00queue_flush_queue) },
	{ 0x819ecbae, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa8d132dd, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1cee91ba, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xba3fa8e, __VMLINUX_SYMBOL_STR(rt2x00queue_start_queue) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x65c19ef2, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0xcbacdb3a, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x175f908b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x285f4e9, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x71f1887d, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xabd5925e, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0x35a6b6b3, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x87fac354, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x85c93c3c, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xeefd206f, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdbed6156, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x696284b0, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0x2fd31cef, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xc1286b6, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0x1b8aa7ef, __VMLINUX_SYMBOL_STR(rt2x00queue_stop_queue) },
	{ 0x1ed70c11, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0x7b0ada1e, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x37ecf6c1, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "20242E1F8506FD544B1E931");
