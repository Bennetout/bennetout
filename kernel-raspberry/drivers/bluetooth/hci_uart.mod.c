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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5affe4e7, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xc295f672, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x216b1265, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x6b2f49cc, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x531a1854, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc668d407, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0x7aab607e, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xef4334da, __VMLINUX_SYMBOL_STR(btbcm_patchram) },
	{ 0x268f7b16, __VMLINUX_SYMBOL_STR(btbcm_check_bdaddr) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x1d168cab, __VMLINUX_SYMBOL_STR(hci_reset_dev) },
	{ 0x5c46ecce, __VMLINUX_SYMBOL_STR(tty_unthrottle) },
	{ 0xad4b46e, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x5641485b, __VMLINUX_SYMBOL_STR(tty_termios_encode_baud_rate) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21e747a0, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x1b4b507c, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xcfe01b6e, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x487ca03d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdd73df23, __VMLINUX_SYMBOL_STR(tty_ldisc_flush) },
	{ 0xad629ecd, __VMLINUX_SYMBOL_STR(n_tty_ioctl_helper) },
	{ 0x198f21a6, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7092cea7, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3239132, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xf53cd6ae, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf4aab2f3, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9d5cab4c, __VMLINUX_SYMBOL_STR(btbcm_initialize) },
	{ 0x70245ed7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb0a97dcb, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x46ce479b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1b308bce, __VMLINUX_SYMBOL_STR(btbcm_finalize) },
	{ 0xea1a989d, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x949dc29e, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0xf23ed3e8, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x6cc72d94, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xd25fda63, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x683a78a8, __VMLINUX_SYMBOL_STR(tty_set_termios) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btbcm";


MODULE_INFO(srcversion, "0AC27337B01C89977CE9C8E");
