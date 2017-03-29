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
	{ 0x3a4c665f, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x3abb7bd5, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xa552af6e, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x2e56d0a8, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc043d50d, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x26b18348, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xb775be4c, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0xba004f66, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x57a5b5b1, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa207a633, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xb1ee3ed0, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xae023190, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xea81037d, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xaa0089a2, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0xe0985686, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x710dfdf, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x33989b49, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2fcbc6db, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0xf0d1a917, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0x13ba7515, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3c066687, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x9ef3d2db, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x39722d21, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x60941a9c, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xdf6768f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7e5b2d8f, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x92c9d02b, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xfc87b50d, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x829adc36, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x62ea9005, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x4a687058, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "0ADE5E6B77BC88B5CABBCD4");
