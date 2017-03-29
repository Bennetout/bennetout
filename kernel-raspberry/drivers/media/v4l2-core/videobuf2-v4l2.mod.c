#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xed08a6c, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbf0b51f7, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x1f8027d6, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0xc68a40a1, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x6b12e80, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2d328655, __VMLINUX_SYMBOL_STR(vb2_debug) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x545fdc9d, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3a0a39f9, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x62adbe86, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x7b0943ac, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x58c41a95, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8689a54b, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x48279c, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0xa55a3c41, __VMLINUX_SYMBOL_STR(vb2_queue_error) },
	{ 0x34d7bdf4, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x6912e653, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x41dd273d, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0xf96e63b6, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xce6518aa, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xccbbe848, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xf73d0356, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,v4l2-common";


MODULE_INFO(srcversion, "4E01A603F43F1069826E81A");
