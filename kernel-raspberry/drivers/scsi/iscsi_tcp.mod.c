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
	{ 0x45f4466b, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5c8d3a8b, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xe2bceebb, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x5ef096d8, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x9193d42d, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x5db9f547, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x1ea023b2, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xf1485f12, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x9fb6df33, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x79a4530b, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xfa1b9496, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x13d4b252, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x8db90e1a, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xff04cbce, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x394fe283, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x85b9d509, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0x447e5baf, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x449e7ff3, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x55fa88ff, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xcc757645, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xda413fe3, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xd2871ed0, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x9139358, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xf3f1d2cf, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x24d00c8, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xe3875e07, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xf77016c3, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x200bbbea, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x4ad8d9b7, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x1cc5568d, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x7f2e1ecd, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x1142f489, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x5fe275f2, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xfb628dc6, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x28c7b5, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x2d472e2, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xa552af6e, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x360b3073, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xd1ef2625, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd05566b1, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x5e5ea2cb, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x33989b49, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x9b7fc9cc, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xaafa55ba, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x3355a0fa, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x66d12d52, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x58f3693e, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x4ddd3229, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6878d7b5, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x13f461f, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xc608ef09, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0xa4fbf0a3, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x3abb7bd5, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x6e2dd79f, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4aa31fa9, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0xf42a0efc, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0xf2a1f09f, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xda95db63, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "0A7D191587D7867DCD7816A");
