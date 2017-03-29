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
	{ 0xc836737e, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x2eaefc55, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb8fbf26b, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0xaf73a9a2, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb6b955d1, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x12aac914, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xc88d39c8, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x112e8189, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x710dfdf, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "165447E335360E4DCBC5D0B");