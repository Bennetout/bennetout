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
	{ 0x8990bf6c, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x9aba1ab3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xd99eb027, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x53a23189, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xe80e3731, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0x9b7fc9cc, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x5c74751c, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xb47b846d, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x8b6a02bf, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x16e265ae, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x3190eaee, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xf20d31d8, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x6df5209a, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x382a6983, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x7d16136c, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x59391690, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xb95fa4a7, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xe89a7fe2, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xa048d839, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x4bdcd51b, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x624a7ce0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xa6596c13, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf770972b, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x6f7ea0e6, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xbef5194e, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x3f65ff4b, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x48164bb3, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x1935548a, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xaa797c28, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbe97c5ef, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x6d0c3d6d, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xbc35a247, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0xfd372ead, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xb2c0d152, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xc28a0ae0, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x4ae19486, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x197d9b02, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0xf0900c4, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x440efda7, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x40761ef2, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x35bab210, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x81f52408, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x9f31e443, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6a44efa6, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0xf92f521b, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x141e1fe9, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x600d7666, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0xcd9e4d6a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x7e557daf, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "705AA130140BF892ED5F209");
