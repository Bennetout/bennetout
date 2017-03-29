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
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3075eb7d, __VMLINUX_SYMBOL_STR(irlmp_data_request) },
	{ 0x481a93c4, __VMLINUX_SYMBOL_STR(irlmp_open_lsap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8a151930, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0xe61a72b5, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0xdc64fc57, __VMLINUX_SYMBOL_STR(irlmp_close_lsap) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x2dfb2146, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xacc8fc59, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3d20dc5, __VMLINUX_SYMBOL_STR(irlmp_connect_response) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xe79f12a9, __VMLINUX_SYMBOL_STR(irlmp_disconnect_request) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa662e917, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0xef16660b, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x74c6eb16, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f55c3a2, __VMLINUX_SYMBOL_STR(hashbin_remove) },
	{ 0xbf285a4c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x4de96e2a, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3958356a, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb710786e, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0xb3967285, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xaf3e8a8d, __VMLINUX_SYMBOL_STR(irlmp_connect_request) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x38337aed, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0xc3a512dd, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x3acf34d3, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xf529ab00, __VMLINUX_SYMBOL_STR(irttp_flow_request) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x4479ef51, __VMLINUX_SYMBOL_STR(hashbin_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "2393236B8EC50AEE6CC225A");
