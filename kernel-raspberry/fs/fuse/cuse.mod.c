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
	{ 0xfc05d59f, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x96a1d7e5, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x67720bd4, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x4461f089, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x264586be, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x8d38fca, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x32f82cba, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x54c0b08c, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x508e3205, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0x44d4c605, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x6f06c9b, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x984df1ca, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x6820aa6c, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0xca7b3377, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0xc6aada28, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcfaaa68d, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x21eba563, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x9e33c816, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x7073c5fa, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x957a145f, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x1465333c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf725ea8f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xf9f5a343, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x7f42c091, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x82edd8da, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xcd0cbf76, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x9a5daaf6, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf74f9444, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x11df9b8b, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0xf7e79095, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xcfe90fbb, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbb425b78, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "787F1E2FFC67670DBA1811A");
