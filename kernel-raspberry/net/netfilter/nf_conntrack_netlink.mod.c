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
	{ 0xb4e9eef2, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x36345eb2, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x68efecfe, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xb7ffe5a4, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x2b4d9a0d, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x1df777b4, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x18720862, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x11224cc4, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xf3b8634, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xa56e17db, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x9d66f8be, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x733e8f10, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0xc3e605d2, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x98190711, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xde91b778, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xa554db32, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xce5370cc, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xa065725c, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0x166fce4f, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x373cf5ae, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xb4afa3ab, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x108dd451, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ff5e732, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x2b8b3698, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xa14cfd5e, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xfeafd0c, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1b9aee21, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x58012426, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0xeb0279c4, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x1bab16cf, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xc15048a9, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xc33907d, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{  0x54a4a, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e66f6a0, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x16a99d3e, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa2634dd6, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x25f3bd2e, __VMLINUX_SYMBOL_STR(atomic64_xchg) },
	{ 0x6ca1d1a4, __VMLINUX_SYMBOL_STR(atomic64_read) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xdbb40561, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x8e49ba52, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "D681B62CCD89B4C353DF289");
