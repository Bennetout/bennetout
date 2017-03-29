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
	{ 0xd0fe1d2c, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xd9506e9b, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x7c5d447a, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x7e93f567, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x17aa26e9, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x14848685, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x1606e0e0, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x8d7ad7d4, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xfcbb1fd2, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xa6987c9c, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x7ff9cc6b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xb4afa3ab, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8005ddd5, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x6e5ff8ce, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x62feac78, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x1f782046, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89a299b8, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "4473DC33407AFAE86A62D7E");
