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
	{ 0xb23b0f93, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0x619f08d2, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1148c08e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x320b53a8, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xa9280a1e, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2d67ec59, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x9d85cfae, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xf3d7f48d, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x9dbea1af, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xfe64ac8e, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xae46bb6, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x6cc72d94, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xae2c9e75, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x389f9be0, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0xb584df87, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xd76ccc42, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x38a89bb5, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xabb05384, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0xcb6eb2e, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9011f355, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0x70b2ac36, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x534e5a3d, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0x4e3e93b9, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xc3e2d667, __VMLINUX_SYMBOL_STR(uart_insert_char) },
	{ 0xdd5c7c99, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc7b5c72d, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0x20f136fd, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0x6323281b, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0x4349f901, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x57ef78e5, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33b7898a, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x935007d9, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x98053283, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x97adef51, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0x48b6be33, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-spi,regmap-i2c";

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762*");

MODULE_INFO(srcversion, "7C32A942B03CE13CA8C5D92");
