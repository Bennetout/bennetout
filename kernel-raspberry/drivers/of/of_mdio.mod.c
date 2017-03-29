#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x717007d9, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0xee98fd57, __VMLINUX_SYMBOL_STR(phy_attach_direct) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27d14f1f, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x39d8626c, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf6b177aa, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0x22a74072, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0xd039f7, __VMLINUX_SYMBOL_STR(phy_device_create) },
	{ 0xbdbcf591, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x85c667af, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x1968f248, __VMLINUX_SYMBOL_STR(of_prop_next_string) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb0a6255d, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x92df742, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x3f6cf198, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x812dabc1, __VMLINUX_SYMBOL_STR(of_node_get) },
	{ 0x85a92eda, __VMLINUX_SYMBOL_STR(mdio_bus_type) },
	{ 0x3f44f332, __VMLINUX_SYMBOL_STR(of_node_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "375ACA0D33C7574ABBA042E");
