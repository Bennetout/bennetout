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
	{ 0xc3027d1f, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x7e10d6a5, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x6ad2899f, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x5c20e77e, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x162f7f16, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xc46ea973, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x4297e48f, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x3e19234b, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdf480b33, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x4a53243b, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xbe537efb, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x86f79a85, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x8872c810, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x5a53652a, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0xa904fdbf, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbbb6f382, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x2d5cf407, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x7de03e65, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x2f5a5bd1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "46C1D87521CE8B31714C7AE");
