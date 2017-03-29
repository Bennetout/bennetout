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
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xec35fbee, __VMLINUX_SYMBOL_STR(aead_exit_geniv) },
	{ 0xcbac6ae7, __VMLINUX_SYMBOL_STR(aead_init_geniv) },
	{ 0x29ed75f, __VMLINUX_SYMBOL_STR(skcipher_geniv_exit) },
	{ 0xb0bd55d8, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xf5d2e925, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
	{ 0x9650ec8b, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0x7aa0c4ed, __VMLINUX_SYMBOL_STR(skcipher_geniv_free) },
	{ 0x5df2b8cc, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0xa2dcff69, __VMLINUX_SYMBOL_STR(skcipher_geniv_alloc) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1989d101, __VMLINUX_SYMBOL_STR(crypto_default_rng) },
	{ 0x668402aa, __VMLINUX_SYMBOL_STR(crypto_put_default_rng) },
	{ 0xfc71621b, __VMLINUX_SYMBOL_STR(skcipher_geniv_init) },
	{ 0x6ff607b6, __VMLINUX_SYMBOL_STR(crypto_get_default_rng) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "52C328EDA9BD9DDB08F64BA");
