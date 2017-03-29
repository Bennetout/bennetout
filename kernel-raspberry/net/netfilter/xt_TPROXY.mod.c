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
	{ 0xc16876af, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xcd1d5920, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x15af4057, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0xae20d67f, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0x9605fe39, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x5c4f7f16, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x5b72816a, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0xfe253b68, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x96be10cf, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb31c903b, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x50d2c48c, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xab38707b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x48a9ad2d, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xa81e0144, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x7b8a35bf, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4,ipv6";


MODULE_INFO(srcversion, "8CC000D015F2730D68DD5D8");
