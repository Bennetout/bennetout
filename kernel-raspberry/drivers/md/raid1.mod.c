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
	{ 0xe510aae6, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x5a8a2082, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe5bd0ea5, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x8ab4079e, __VMLINUX_SYMBOL_STR(atomic64_add) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x901674c7, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x611a9752, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0x363ec8db, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x1739f8a5, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb067e857, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xb2c27722, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x93be15f4, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75a17bed, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd50e8967, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xabe32c9, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x1ed8c3f9, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x5d29760b, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf338bace, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0xe338efad, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x1be66bfd, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0xfce369e0, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9648d4fe, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x6d757c34, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x58975780, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xb5721a02, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0xf725ea8f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x53a392dc, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x5928e0b3, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xa55fcd47, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xd508ddfd, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x4282b1f1, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0xc9a00ce6, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x1cd0f6c0, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x3225d5b, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0xb17770e1, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0x650e2f6f, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xbc7581a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x48530ab5, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x6acf85a0, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xec85d209, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0xd1bd8673, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x99fb99d1, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xca10d256, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0xbc264022, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x54c0b08c, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf3029433, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x815131ba, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x317ab871, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b90cdaa, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x984df1ca, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4b9d959f, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc20a3a2f, __VMLINUX_SYMBOL_STR(md_cluster_ops) },
	{ 0x886d768, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x22374a5d, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x431e775c, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xde7dd5d1, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x920664c8, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x98430240, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x303196c6, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "32FAE561947B19C6E72E701");