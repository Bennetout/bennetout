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
	{ 0x40000904, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xba96caf9, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x28741ecc, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0xc5aefa8, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe4c88f11, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x82706631, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x2abae88d, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x8a417e98, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xea7e98cc, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd9d10196, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xcd5693fb, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x42621196, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x180b223b, __VMLINUX_SYMBOL_STR(cx231xx_get_i2c_adap) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xabb06ec4, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x8712c0b7, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x3dbb2767, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xa5aa2954, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xdc58973f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x65f3a750, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x838720a9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x6edb4d11, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x486ad5af, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0xbe8a5083, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0xc5a142a6, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x1c31cb78, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0xa688dd2b, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a1ed4ed, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8efb86a3, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "94D88B7C2E034D181C82206");
