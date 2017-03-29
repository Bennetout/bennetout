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
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6a8b0079, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x6756906f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x3b437edd, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x264586be, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x551013be, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0x32f82cba, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x731c95c0, __VMLINUX_SYMBOL_STR(sg_scsi_ioctl) },
	{ 0x1bce3065, __VMLINUX_SYMBOL_STR(blk_trace_startstop) },
	{ 0x952dafcd, __VMLINUX_SYMBOL_STR(blk_trace_setup) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x64cbc5fc, __VMLINUX_SYMBOL_STR(blk_trace_remove) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x1276f80, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xec250434, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xf5eb86ea, __VMLINUX_SYMBOL_STR(blk_verify_command) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x73a37dac, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x41bd4159, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xf9ac0439, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9e6fcac, __VMLINUX_SYMBOL_STR(blk_rq_map_user_iov) },
	{ 0x7a7a65e9, __VMLINUX_SYMBOL_STR(import_iovec) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa3696c45, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xd93149d5, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xdc58973f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x243157d4, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xee45d91e, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0x1198284b, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xd1bd8673, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x35a941d7, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x21eba563, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x9e33c816, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x742d47ee, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x623b3ed1, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xe5d1a9ef, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1edec889, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7681e69a, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc9994283, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x972ddb32, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xf28fe33b, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0x6dad4538, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x8fc796ea, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x451efb05, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x54c0b08c, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x984df1ca, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf8f41619, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf725ea8f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x4b36c44, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xf7e79095, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7186e1a, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x99fb99d1, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x89699394, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfb4fbd4f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "964BE9EB0C3796CC4937769");
