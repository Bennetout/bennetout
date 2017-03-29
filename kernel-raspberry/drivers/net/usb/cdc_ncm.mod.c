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
	{ 0xe14f6076, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xaeeb57d7, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x569802db, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x231627c7, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xee50083e, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x1709e434, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb4f1ed01, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x339ecc8a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x84c7de08, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x27f90a9d, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x99c60112, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xdbb6f6a2, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7f55b39a, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xacbb583d, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x494f9882, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xfcf86956, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xc343d9f8, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x8419b14d, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2c25d129, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xf79573b4, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xc5c284a, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xff6b4de0, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xb08763f1, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x4157215c, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x9f2edb1e, __VMLINUX_SYMBOL_STR(cdc_parse_cdc_header) },
	{ 0x593e8ea9, __VMLINUX_SYMBOL_STR(usbnet_get_ethernet_addr) },
	{ 0x57b581ca, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xb2f2d9f, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xbf384ad7, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xc63940e8, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2a533599, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x16a5e4e4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x87fac354, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdd8a8f25, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x20fee7c0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x1e420c17, __VMLINUX_SYMBOL_STR(usbnet_manage_power) },
	{ 0xc9a6e301, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x38164a42, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "395D1165DB159FE60C9342B");
