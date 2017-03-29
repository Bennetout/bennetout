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
	{ 0x6f7ea0e6, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xb4ca8c0a, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8990bf6c, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x300edf68, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xfd45b2da, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x3f65ff4b, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xbef5194e, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xf3503a20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb47b846d, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xb12b31cb, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xbe97c5ef, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x6df5209a, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x5c74751c, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x9b7fc9cc, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x35b71cbd, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf92f521b, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x7e557daf, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x114f2b7f, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x3190eaee, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xa6a7b685, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x141e1fe9, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xd1dc51f, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x9aba1ab3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xe2448355, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0x624a7ce0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x309261a0, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x2ecb46f, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe89a7fe2, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xa6596c13, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xa18571d6, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x16e265ae, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xf770972b, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x6d0c3d6d, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xc90ceb01, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfd372ead, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xe0dff794, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x8b6a02bf, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xff243d4f, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x37f90c10, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0xefb85380, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xcd9e4d6a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "30B3DFD9B5EF2FBF78867CE");
