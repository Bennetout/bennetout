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
	{ 0xbcb95005, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xfc23236, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x129e974c, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0x63e6eee3, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xce8a3919, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0x15648912, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0xfa238bab, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0x8249e491, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xb9080b0, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x5e5ea2cb, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xac94c15a, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xa4859c0, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x97533429, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x9446452b, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B81449EB6C77EFB9E730695");
