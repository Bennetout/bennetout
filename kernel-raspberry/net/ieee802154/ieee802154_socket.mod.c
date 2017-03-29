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
	{ 0x232f4d21, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0xd5982fe1, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf56683, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7a7973e1, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xf3503a20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x5f2a7fd, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xbe97c5ef, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x5c74751c, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x9b7fc9cc, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x2617bf8d, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa3342b99, __VMLINUX_SYMBOL_STR(ieee802154_hdr_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xcb2d991f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x7e557daf, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd5cfaa2c, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xab2dfeff, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf04e2d5a, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x522e0df2, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf93e65f5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xd1b90b38, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x624a7ce0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x647523be, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x6e5b7ebd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x7c7fb974, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe89a7fe2, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x1f47c0af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x16e265ae, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x8b6a02bf, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x1d19fd20, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xcd9e4d6a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "3902668E61C4C29C6EE4D17");
