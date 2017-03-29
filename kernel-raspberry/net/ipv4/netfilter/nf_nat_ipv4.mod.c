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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7b08213e, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0xef78993b, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x9054294, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf40e5a5e, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x336ea366, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0xd3875d59, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xbc4ffed2, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0xf4bab677, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x2474269d, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x1e768923, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xe343ac19, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xb8026cf2, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x14848685, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x6e1b7a3c, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x5250bf5d, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0xbba7701d, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x17c4c6a, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "62E44ADA1A1F6F29B5E6B7A");
