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
	{ 0xd5982fe1, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x878434b8, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x8a151930, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x788b08f9, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xdff5c7d2, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xbdc69270, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x4324b812, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xb4b6d63, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1851151c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x4a722b88, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xf3503a20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf1cf45c4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9b7fc9cc, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2617bf8d, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x487ca03d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xcff5532, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xcb2d991f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x7e557daf, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x522e0df2, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe6f3cae5, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0xf93e65f5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x624a7ce0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x647523be, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x6e5b7ebd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe89a7fe2, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x70b6dfa3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x1f47c0af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x1872e39a, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x9ac73e1d, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x46ce479b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1d19fd20, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x3acf34d3, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xc47c143b, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xd4141e65, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xf79365b4, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0xcd9e4d6a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "A4A5D0011310E8E3819309C");
