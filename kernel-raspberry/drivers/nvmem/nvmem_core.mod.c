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
	{ 0x2ccf016, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x80dd7f96, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xe21fc1ef, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7c418065, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x8575d497, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb2eb9cee, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9f1ff776, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb7cacf21, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x5d871532, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0xf2395700, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xed95e712, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x80fb231, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xd68ed7f2, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x1b173a5a, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x7d4bd0f5, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x566aba80, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x128fbe4f, __VMLINUX_SYMBOL_STR(of_property_match_string) },
	{ 0x786c862c, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x304fa77a, __VMLINUX_SYMBOL_STR(of_get_next_parent) },
	{ 0x38499f5a, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EBC2523F2F74A8267DFC4E7");
