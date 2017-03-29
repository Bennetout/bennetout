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
	{ 0xf81a9f16, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0xaecb5a70, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfdd6f326, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xaf6e4494, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa30f157c, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0xec6f8271, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0xf91edbec, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0x8ef13268, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x7e1266b9, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x49c0e364, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x5777f70d, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xb86918d4, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x76b57d6e, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe55ae61, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf60320ba, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x84155de8, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xf5c45125, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6a34a054, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x514ed918, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x4be1bf5a, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x5183ea6b, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x693be04, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xfcf86956, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x47e63c8e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x58c41a95, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xe635d625, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xfd51b846, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x72093748, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xd3a02811, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x63af1849, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0xa996f95, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x1cdd4319, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xa1d3e71e, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x34d7bdf4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xcce18a42, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0xc66aa53a, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0x2477d21e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x6d81515d, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x118c0521, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x5d0c5443, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0xe4d9eb8, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x40000904, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x619047ec, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xda298ccc, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2a04370b, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x3392e9e0, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xfdee0b01, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x1f010e89, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x6d578f78, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x67c4778b, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0xafc487cd, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videodev,v4l2-common,videobuf2-vmalloc,videobuf2-core";


MODULE_INFO(srcversion, "769279BA70B826DC169E8A3");
