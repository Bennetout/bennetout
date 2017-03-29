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
	{ 0xd1dacacc, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x5e1bdae3, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7e6ac04, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x97292973, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xa32ae0d2, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xc48dc518, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x3211bc88, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xe14ad7dc, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa58333dc, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5d55dbcf, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x6342be64, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1ca64707, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xaf1c1156, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xa5827ec3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x6d7e5e37, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb20f44b2, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8796b546, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x864dce86, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0x67d3265d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xec4b3700, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x204f96a5, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xedf05ee8, __VMLINUX_SYMBOL_STR(mwifiex_dnld_fw) },
	{ 0xa6b12990, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdbf8e769, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xb0c19019, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x4c02a661, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0x8eceb0ad, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0x4b12af6, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xde94257f, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0xa4e54f06, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x675ebd67, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x953da4fe, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xc1cea0a6, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0x229b8d46, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb148c978, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xa6e9f45, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xe7cd668b, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x2ffb92e9, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb5fd65a3, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xb0a46cad, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "85070A93B2F890016CA4A4A");
