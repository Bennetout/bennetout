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
	{ 0xc73c8fa7, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x18e4f8aa, __VMLINUX_SYMBOL_STR(swphy_read_reg) },
	{ 0x6696c1d8, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x4a2098ae, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xecc27f0a, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xf37e2464, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x9ddf01ab, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0x9b074ace, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x88c7e260, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xeea78e51, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xe2afe9f4, __VMLINUX_SYMBOL_STR(phy_device_remove) },
	{ 0xff78530, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0xe4e48b12, __VMLINUX_SYMBOL_STR(swphy_validate_state) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x361e87e0, __VMLINUX_SYMBOL_STR(of_node_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xed725c5f, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xe6252d2c, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xf420e0d9, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "980742036178D3575479DFB");
