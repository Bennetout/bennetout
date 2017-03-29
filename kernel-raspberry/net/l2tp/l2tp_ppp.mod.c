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
	{ 0x7d0d07f9, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0xdd785159, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf93e65f5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x3a30e43, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xd5cfaa2c, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0xffffad3e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xe89a7fe2, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x4a74890e, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xcc0b51d7, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x624a7ce0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x23f9af32, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd108c3c2, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0xb4b6d63, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x49f8661a, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3190eaee, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x2a01370f, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xecfbc198, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x540a2577, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x487ca03d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xac54f127, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0xb9b172c2, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xd5bf283a, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x1307424d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xff201b8d, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x40761ef2, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xa2442d9b, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xbd6a7b97, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xfb239c61, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x96757977, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xf3503a20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xff243d4f, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x7e557daf, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5aa63a9e, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0xd5982fe1, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xcb2d991f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8bf0eaab, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x3f65ff4b, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x6f7ea0e6, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "74ACE6A67B1D323D097EDC3");
