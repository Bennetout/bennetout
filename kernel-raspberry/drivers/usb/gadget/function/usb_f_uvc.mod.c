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
	{ 0x1d37a414, __VMLINUX_SYMBOL_STR(usb_function_deactivate) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfdd6f326, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x94408ae3, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_ss) },
	{ 0x22d35b1, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x530ef4dc, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xaf6e4494, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xee5b91bb, __VMLINUX_SYMBOL_STR(v4l2_event_queue) },
	{ 0x1f8027d6, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x7e1266b9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xb86918d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe55ae61, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xb2feeaad, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1349f244, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x84155de8, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdbd0405f, __VMLINUX_SYMBOL_STR(usb_function_activate) },
	{ 0x514ed918, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x5edf0b91, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xd612aeac, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x693be04, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xbf1b85e9, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xcd68c083, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x58c41a95, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xe635d625, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3da05189, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x3d7078e5, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xb71536eb, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0xd35ba70a, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x74b71b24, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd8452371, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x34d7bdf4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xaf3b0784, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x8801d6a6, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xea24ef58, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x619047ec, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xa4d1dc56, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x993f772d, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x7fcc4072, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x7ab8dc93, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xfdb8577f, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x4d438b2b, __VMLINUX_SYMBOL_STR(config_group_find_item) },
	{ 0xc4cd2d63, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x1f010e89, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xbb867cf7, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0xafc487cd, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,videodev,videobuf2-core,videobuf2-v4l2,videobuf2-vmalloc,v4l2-common";


MODULE_INFO(srcversion, "DC62A8166014955F656A2BA");
