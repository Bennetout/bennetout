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
	{ 0x6a8b0079, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xabec9865, __VMLINUX_SYMBOL_STR(bus_unregister_notifier) },
	{ 0x285b0b0e, __VMLINUX_SYMBOL_STR(i2c_bus_type) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x264586be, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x559860b9, __VMLINUX_SYMBOL_STR(i2c_for_each_dev) },
	{ 0x9ddb0a49, __VMLINUX_SYMBOL_STR(bus_register_notifier) },
	{ 0x32f82cba, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb4fb14f7, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x7186e1a, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x35a941d7, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x8ab6b2c6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb68c9d19, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x374225d6, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xd246ad3, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb8f5f2cb, __VMLINUX_SYMBOL_STR(i2c_verify_client) },
	{ 0x1ab6bfa9, __VMLINUX_SYMBOL_STR(i2c_adapter_type) },
	{ 0x9c28f719, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5ab9cd27, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b6c1315, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "152B29DFA59B8F2B145C270");
