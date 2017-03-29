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
	{ 0xa974620a, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x5f38e683, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x2bbfbd42, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x4297e48f, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x70b93379, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xdf480b33, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xd8550306, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x8f4f51c1, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5e5ea2cb, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xcb345cfa, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x79e2a2ff, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x593154f0, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1b445b1d, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x82af6030, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc2278a94, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x2d5cf407, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe26d7ff, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x2f5a5bd1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D49196686DDF42DCBF46D5B");
