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
	{ 0x5e4862ee, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xe6fbe96e, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x2326df7f, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbdc69270, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x4a722b88, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x34d8d532, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc479b32a, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x9eff3dab, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x7915d94f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x753afba0, __VMLINUX_SYMBOL_STR(lowpan_netdev_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa0a06362, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb4e9eef2, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xaefe98c9, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x6df7c823, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd03eb1e8, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek) },
	{ 0xf04e2d5a, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x522e0df2, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf8d9277f, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x96850c, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0xe130472, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x83702ef7, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1c6c0f7a, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x68efecfe, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x355d2b04, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek_addrs) },
	{ 0x95738e40, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x16e55cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x700a9bd3, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x1d19fd20, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xc47c143b, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xd81f09c6, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x4d7aef69, __VMLINUX_SYMBOL_STR(ieee802154_max_payload) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";


MODULE_INFO(srcversion, "40022D68F925AFD8FB22AD5");
