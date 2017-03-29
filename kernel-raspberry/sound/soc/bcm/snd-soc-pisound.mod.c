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
	{ 0x615ee1ed, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x837b9243, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9ce65b56, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9dbea1af, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xc78cb1aa, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x17c50734, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4cc50611, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x329a3aca, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x5f29e512, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_mask64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x40c5ed00, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x10148d8c, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_peek) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc7b404e6, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x686af8ac, __VMLINUX_SYMBOL_STR(spi_bus_type) },
	{ 0x7c2f217, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x85c667af, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4a4b67, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xd9d73e8d, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0xf8e077d1, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_ack) },
	{ 0xed312e64, __VMLINUX_SYMBOL_STR(gpiod_unexport) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x68fc5656, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x92965b83, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x798ac5d3, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xedb0ada4, __VMLINUX_SYMBOL_STR(gpiod_export) },
	{ 0xa05e87ce, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x32e1cb9e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x18d5d902, __VMLINUX_SYMBOL_STR(gpiod_get_index) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf6739cb8, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf23ed3e8, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x4b92324d, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x6dd7c08c, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0x1df2a52c, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi*");

MODULE_INFO(srcversion, "2096B83568D8650EADABEFE");
