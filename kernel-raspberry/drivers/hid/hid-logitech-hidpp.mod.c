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
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xef50169, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xc3b31543, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x4906a967, __VMLINUX_SYMBOL_STR(hid_snto32) },
	{ 0x13ee1571, __VMLINUX_SYMBOL_STR(hid_field_extract) },
	{ 0xa4faf623, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0xcea899ea, __VMLINUX_SYMBOL_STR(down) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x64b90202, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7fe9ad, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xafc89767, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x55bcad26, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x27b3125a, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e0e7092, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x9d42b63f, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x2680670a, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0x7437d8eb, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8ed5b348, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4c86c5f7, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x7fe9f383, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x789616a4, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x9421740, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");

MODULE_INFO(srcversion, "0A558B5266AC8C0738AA39A");
