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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x45fa3ca8, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x260eaba2, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xcd096ff6, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xf4475891, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf38f1921, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x246c4065, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xdeae5b2f, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xb4e9eef2, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x5960d07d, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0xe23a0ce2, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4a9203cb, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7b5ea3bc, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x74d35411, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x1c094986, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xe7b6aa0c, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x66764ceb, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x820bc3e9, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0x23ffcf8f, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x68efecfe, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x81604068, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7b46ab4b, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x311a9284, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x19d66db6, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xd638a2ec, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x7fb91221, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xab38707b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x6f49c61c, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xbcf6383d, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xa14cfd5e, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xc15048a9, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6,ipv6";


MODULE_INFO(srcversion, "5E49137AA48744BD7B56C0A");
