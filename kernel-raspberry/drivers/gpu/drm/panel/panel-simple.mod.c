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
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9f0055ed, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_unregister) },
	{ 0x50b56565, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_register_full) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc302df98, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x64898e57, __VMLINUX_SYMBOL_STR(mipi_dsi_detach) },
	{ 0x317fa0d7, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0xf75c4d62, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc7ac22dc, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xcb96f7e7, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xc94b3585, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0xb5a96db8, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x219bf7d5, __VMLINUX_SYMBOL_STR(of_find_i2c_adapter_by_node) },
	{ 0x3f44f332, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x80b3058e, __VMLINUX_SYMBOL_STR(of_find_backlight_by_node) },
	{ 0x9ce65b56, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xbe40dc43, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa1c9c5da, __VMLINUX_SYMBOL_STR(drm_display_info_set_bus_formats) },
	{ 0x96533674, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x289287c4, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0xdae715e0, __VMLINUX_SYMBOL_STR(videomode_from_timing) },
	{ 0x17399f5d, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x5d644dd8, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0xb5dfa744, __VMLINUX_SYMBOL_STR(drm_display_mode_from_videomode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b0297cf, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xc6e3ef74, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x2c4cf8df, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_mipi_dsi,drm";

MODULE_ALIAS("of:N*T*Cauo,b080uan01*");
MODULE_ALIAS("of:N*T*Clg,ld070wx3-sl01*");
MODULE_ALIAS("of:N*T*Clg,lh500wx1-sd03*");
MODULE_ALIAS("of:N*T*Cpanasonic,vvx10f004b00*");
MODULE_ALIAS("of:N*T*Campire,am800480r3tmqwa1h*");
MODULE_ALIAS("of:N*T*Cauo,b101aw03*");
MODULE_ALIAS("of:N*T*Cauo,b101ean01*");
MODULE_ALIAS("of:N*T*Cauo,b101xtn01*");
MODULE_ALIAS("of:N*T*Cauo,b116xw03*");
MODULE_ALIAS("of:N*T*Cauo,b133htn01*");
MODULE_ALIAS("of:N*T*Cauo,b133xtn01*");
MODULE_ALIAS("of:N*T*Cavic,tm070ddh03*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wa01a*");
MODULE_ALIAS("of:N*T*Cchunghwa,claa101wb01*");
MODULE_ALIAS("of:N*T*Cedt,et057090dhu*");
MODULE_ALIAS("of:N*T*Cedt,et070080dh6*");
MODULE_ALIAS("of:N*T*Cedt,etm0700g0dh6*");
MODULE_ALIAS("of:N*T*Cfoxlink,fl500wvr00-a0t*");
MODULE_ALIAS("of:N*T*Cgiantplus,gpg482739qs5*");
MODULE_ALIAS("of:N*T*Channstar,hsd070pww1*");
MODULE_ALIAS("of:N*T*Channstar,hsd100pxn1*");
MODULE_ALIAS("of:N*T*Chit,tx23d38vm0caa*");
MODULE_ALIAS("of:N*T*Cinnolux,at043tn24*");
MODULE_ALIAS("of:N*T*Cinnolux,g121i1-l01*");
MODULE_ALIAS("of:N*T*Cinnolux,n116bge*");
MODULE_ALIAS("of:N*T*Cinnolux,n156bge-l21*");
MODULE_ALIAS("of:N*T*Cinnolux,zj070na-01p*");
MODULE_ALIAS("of:N*T*Clg,lb070wv8*");
MODULE_ALIAS("of:N*T*Clg,lp129qe*");
MODULE_ALIAS("of:N*T*Cnec,nl4827hc19-05b*");
MODULE_ALIAS("of:N*T*Cokaya,rs800480t-7x0gp*");
MODULE_ALIAS("of:N*T*Contat,yx700wv03*");
MODULE_ALIAS("of:N*T*Cortustech,com43h4m85ulc*");
MODULE_ALIAS("of:N*T*Csamsung,ltn101nt05*");
MODULE_ALIAS("of:N*T*Csamsung,ltn140at29-301*");
MODULE_ALIAS("of:N*T*Cshelly,sca07010-bfn-lnn*");

MODULE_INFO(srcversion, "921853D8EA86152D1080A1C");
