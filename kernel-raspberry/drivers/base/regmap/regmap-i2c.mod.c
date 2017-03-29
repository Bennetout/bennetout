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
	{ 0x5e2e3b4, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0x8ab6b2c6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xa409fedc, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe0d17a88, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x3db5af98, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xd07d14c9, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xb68c9d19, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x88a6ddb2, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xc9d0b705, __VMLINUX_SYMBOL_STR(__regmap_init) },
	{ 0xf87bc662, __VMLINUX_SYMBOL_STR(regmap_get_val_endian) },
	{ 0xdc47917b, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ADEF79A1E6A837BC4FA0EB7");
