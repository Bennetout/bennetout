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
	{ 0x40761ef2, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc2c0ef3b, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0xeaba5254, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xee50083e, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x99de208d, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xdff5c7d2, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x4324b812, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x729c4c85, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x84c7de08, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xbe66a05a, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0xf3503a20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x5f2a7fd, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc344fe71, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x9b7fc9cc, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xac992d45, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb38cf294, __VMLINUX_SYMBOL_STR(sock_efree) },
	{ 0x494f9882, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xcff5532, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd5cfaa2c, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x4de96e2a, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x1935548a, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf04e2d5a, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf93e65f5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xb8176d5a, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x767a6ccc, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xd1b90b38, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa41f6e4c, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x87fac354, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x83de3815, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x28980f34, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xcd9e4d6a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "DEA0868B4B066B0E64104FB");
