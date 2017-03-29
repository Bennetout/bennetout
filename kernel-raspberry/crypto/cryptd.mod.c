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
	{ 0x5f2cb474, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb7b3c94, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8249e491, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x63e6eee3, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x44131269, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xbf67451c, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x6bba8fd2, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xbcb95005, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x29d89cca, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xac94c15a, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x162936fe, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x80070cd3, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x923365c7, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xfc23236, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x5df2b8cc, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0xc2842ac6, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x6f49f20e, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x52e9aee3, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xaad97306, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x5e5ea2cb, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x60813f95, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x53d474bf, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xb9080b0, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x15648912, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8697c22c, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1cc5568d, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xb0bd55d8, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x8f4f51c1, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4892CD1949CAD30CC23EDAA");
