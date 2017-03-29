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
	{ 0xf83a5f7, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x35f7a521, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x742d47ee, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x48146bd3, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x2148c389, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xec250434, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x40807eee, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb0573de3, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcae2ec08, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9009c46c, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xf28fe33b, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2ac3eb66, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x6551fd51, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1198284b, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa826b82c, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x1aaf00de, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x7c4b1102, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xc9994283, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x1276f80, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xfb4fbd4f, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x599a7f50, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x972ddb32, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xbb2befb8, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x6adde7fc, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9707141e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x854f6df1, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x6dddf5c8, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0xf24c02ef, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x6dad4538, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xf8f41619, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xb5db6115, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xc581ec40, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "F411657402A9E0E2D7A0D43");
