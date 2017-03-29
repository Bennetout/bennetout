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
	{ 0x22d35b1, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x530ef4dc, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x969672e8, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x8332d829, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xc894a799, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2459616f, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xa355d94, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf1cf45c4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x1349f244, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf47b713a, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x3f311bb1, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37f2e5e3, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xadcc3ca7, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x5edf0b91, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbf1b85e9, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf70cac68, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2a741caa, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x3d7078e5, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xeaf8dd23, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x46d2e43f, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd35ba70a, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb6992708, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xb2188f9f, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0xaf3b0784, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd500bffc, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb948164e, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x993f772d, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xb00ffba2, __VMLINUX_SYMBOL_STR(usb_os_desc_prepare_interf_dir) },
	{ 0x1b2b922, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";


MODULE_INFO(srcversion, "CE6EE5B22806D5204E9E9B6");