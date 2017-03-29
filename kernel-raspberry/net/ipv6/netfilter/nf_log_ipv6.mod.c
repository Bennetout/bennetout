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
	{ 0xce017b69, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0xb4e9eef2, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbe53ebe5, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0x68efecfe, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x80c68137, __VMLINUX_SYMBOL_STR(nf_log_buf_close) },
	{ 0xe260a774, __VMLINUX_SYMBOL_STR(nf_log_dump_packet_common) },
	{ 0xd4961de, __VMLINUX_SYMBOL_STR(nf_log_buf_open) },
	{ 0xcf681ffe, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x77ce134, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x576a0011, __VMLINUX_SYMBOL_STR(nf_log_dump_tcp_header) },
	{ 0xf49d2f2c, __VMLINUX_SYMBOL_STR(nf_log_dump_udp_header) },
	{ 0xab38707b, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x4663a951, __VMLINUX_SYMBOL_STR(nf_log_dump_sk_uid_gid) },
	{ 0x487c5d33, __VMLINUX_SYMBOL_STR(nf_log_buf_add) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "3C2D25201F3148B9C052F20");
