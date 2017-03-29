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
	{ 0x2b904bfd, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf65cc649, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xea76d33b, __VMLINUX_SYMBOL_STR(of_device_uevent_modalias) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7073c5fa, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x85c667af, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0xfb46b336, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xae46bb6, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x349ee590, __VMLINUX_SYMBOL_STR(pm_generic_runtime_suspend) },
	{ 0xb6f51ade, __VMLINUX_SYMBOL_STR(pm_generic_runtime_resume) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3f6cf198, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x9c28f719, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x812dabc1, __VMLINUX_SYMBOL_STR(of_node_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1465333c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xcfe90fbb, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x957a145f, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x3f44f332, __VMLINUX_SYMBOL_STR(of_node_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FFDACBFCFB58C9B18ACBFD2");
