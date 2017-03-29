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
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbdc69270, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xddd23cd4, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0x1851151c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x76b762a0, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4ebb9ca7, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0x2360f274, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2178d01e, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1c094986, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xc7d91733, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x89b2357e, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xddb52f81, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4ce1c5f2, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xa18571d6, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7e30aea0, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xcfa2badc, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0x311a9284, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x3e2b48bc, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0xc47c143b, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "96CA697766FA5E4BE938D19");
