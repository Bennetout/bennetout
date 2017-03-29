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
	{ 0x9f0055ed, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_unregister) },
	{ 0x50b56565, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_register_full) },
	{ 0xc7ac22dc, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xc94b3585, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0xb5a96db8, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x3f44f332, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x96460c87, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0x9ce65b56, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x17399f5d, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x5d644dd8, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x96533674, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x317fa0d7, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0xf75c4d62, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0x64898e57, __VMLINUX_SYMBOL_STR(mipi_dsi_detach) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_mipi_dsi,drm";

MODULE_ALIAS("of:N*T*Craspberrypi,touchscreen*");

MODULE_INFO(srcversion, "F366A476C6604B286F68843");
