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
	{ 0x1c094986, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xb4e9eef2, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x311a9284, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x68efecfe, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc799443c, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x8e39ae1a, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xb4dc2a76, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0x9cb15a98, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x2cb7b22e, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0x6dc5098a, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x9e8ef2ab, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7aa27c70, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";


MODULE_INFO(srcversion, "A02ECB40367D6C894857EB0");
