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
	{ 0x729c4c85, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x6551fd51, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf54cf9fd, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x9707141e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xcd234607, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xfe5a2473, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xfb4fbd4f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xcf19d312, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x742d47ee, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb94b1604, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x2e3575a9, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0xa552af6e, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x80e0b196, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x31fa9d28, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xaf3a84ff, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x66ef2333, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x45461962, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0xc7e6b3d6, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4718ae7b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xfdd8b485, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x392d8123, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x33989b49, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x8cae98a2, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xc3fba662, __VMLINUX_SYMBOL_STR(blk_rq_init) },
	{ 0x3cc898e0, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x70a40f30, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x6b91087f, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x28c7b5, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x1fbc1356, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x96684263, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xea81037d, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb4b6d63, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeaba5254, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xad4a847d, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x3abb7bd5, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x5800e929, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DD8C5FF6C2BE9A22548F48D");
