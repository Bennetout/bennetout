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
	{ 0x45f4466b, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd44af49e, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x11eab64, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x18399aa6, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xf109254f, __VMLINUX_SYMBOL_STR(pwm_enable) },
	{ 0xca39c880, __VMLINUX_SYMBOL_STR(pwm_config) },
	{ 0xefd1219c, __VMLINUX_SYMBOL_STR(pwm_get) },
	{ 0xde910664, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x788c2bf1, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x1a5b5fb5, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x5749b11b, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd8500d20, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xae46bb6, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x3d31c2f2, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb350108b, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xe590e273, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0xbf40f4bb, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0xd5c614d1, __VMLINUX_SYMBOL_STR(pwm_put) },
	{ 0xc6c8be15, __VMLINUX_SYMBOL_STR(pwm_disable) },
	{ 0x5b67fa87, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xf725ea8f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x62f81f03, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xf4b1b75a, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xbc35fc08, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8ab6b2c6, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c*");

MODULE_INFO(srcversion, "B8AB72BF12DD8890158ADE1");
