#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce5acd6d, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x8aee3b62, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa4283a9f, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc1ca2b02, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x77fc1a39, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xea81037d, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x8b6c530b, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xe1a5fbe7, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0xcf9622d7, __VMLINUX_SYMBOL_STR(kernel_bind) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8F56A46D6FB9F1702501C0");
