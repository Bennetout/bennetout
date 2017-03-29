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
	{ 0x2b3d523c, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x9be4e862, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x10094dc2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xb4bfbfa1, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0x469d8f59, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xb0cbce0c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xa20b8a74, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf7fca996, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x1b4b507c, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x5839f583, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x767a9ddc, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xce1b0ac9, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x23d16154, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x53062768, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x17ab08c9, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0xdda067d, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0xc530497a, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x9a6476a2, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe5400e27, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x99862ff7, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x3caa40e0, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xa9ff838b, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xa31f6b19, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x70562dcb, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xba0c2011, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x5febabf7, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x16e0e98d, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xf829b85a, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x669bb46e, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xbfbd0cc6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x7956e6f5, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8095a189, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x887f20a8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x187a2cc7, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x5ad4901, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x7c1f7a91, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xab26cc94, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "500494A6CC3FE60D1EC2255");
