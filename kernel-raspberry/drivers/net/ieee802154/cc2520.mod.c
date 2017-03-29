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
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x320b53a8, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xcf9ace97, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd5473937, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0x6cc72d94, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa05e87ce, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xde910664, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x1a5b5fb5, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xec6a4d04, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xd8500d20, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x90fc6d3c, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x49770f06, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x788c2bf1, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4a4b67, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2c501a3f, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0xcde7f43d, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("of:N*T*Cti,cc2520*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "BAAB79E48359522143B20D5");
