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
	{ 0x47af79a6, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xf38b4e8, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x1eed9633, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x5c4f7f16, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x1084b8ad, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7990824f, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "F6809304D5026F78001A836");
