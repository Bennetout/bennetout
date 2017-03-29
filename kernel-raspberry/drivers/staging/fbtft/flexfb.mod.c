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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3df37a55, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x40000904, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x45f4466b, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x320b53a8, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x78b5909a, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0x83754f8b, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0x90a3a13c, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x169cc876, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0x3f1c1c0e, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x636a2490, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0xd4b82c1c, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0xd308ab4a, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x5889b972, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0x9e5719bb, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0xc1d1d8ae, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0xdcedd1b1, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x48091218, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x1655c147, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1a7b59d7, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0x5dc9e80, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xea0a67f4, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0xc8b3e6b1, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "EA5C86705DB9BB727C0E715");
