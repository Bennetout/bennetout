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
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x33a6bdda, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x579facce, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x85c4e2f8, __VMLINUX_SYMBOL_STR(rt2x00lib_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x903b264f, __VMLINUX_SYMBOL_STR(rt2x00lib_dmastart) },
	{ 0xd44ff180, __VMLINUX_SYMBOL_STR(rt2x00queue_flush_queue) },
	{ 0x30c4f7fe, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x74ca77af, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5e0f63ee, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa9a48995, __VMLINUX_SYMBOL_STR(rt2x00queue_start_queue) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x6c1cb81a, __VMLINUX_SYMBOL_STR(rt2x00lib_remove_dev) },
	{ 0x1f9d0e3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x39722d21, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x7031aed8, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xe6f92008, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xb2d99e0c, __VMLINUX_SYMBOL_STR(rt2x00lib_rxdone) },
	{ 0xdf6768f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x87fac354, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x22dedc90, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe44378d7, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4a73d1dd, __VMLINUX_SYMBOL_STR(rt2x00lib_dmadone) },
	{ 0xc0acaaa0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xea5435d2, __VMLINUX_SYMBOL_STR(rt2x00lib_probe_dev) },
	{ 0x72c4fee6, __VMLINUX_SYMBOL_STR(rt2x00queue_stop_queue) },
	{ 0x60174d60, __VMLINUX_SYMBOL_STR(rt2x00lib_suspend) },
	{ 0x6f22b514, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,mac80211";


MODULE_INFO(srcversion, "FADD78F4B0B6C8F4DDFA8E5");
