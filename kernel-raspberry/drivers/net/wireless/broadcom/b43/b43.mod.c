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
	{ 0x2ccf016, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe74dcc95, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x113fa7f, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbd802a2b, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0x39f70e26, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x624549eb, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0x697c180c, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd402a6b8, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc6f60f46, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x8a4bcc5a, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x19d265bb, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2bf6e2f4, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0x3060877d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9b5f4032, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0xbdf71ed1, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa615a55e, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5d55dbcf, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7f5fe38d, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0xa1de410e, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x625aba5c, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4397c248, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0x797b37c5, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x3f95e7e2, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x89ae9fc3, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x54b9f5, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5baaba0, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf7408443, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x819ecbae, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x5847d558, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1dc5629f, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5417e3f2, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd0a5810e, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5cce4898, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0x69e9049f, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x31428434, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x864dce86, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfb1f6172, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0x47254f97, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x11762558, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2fd6b4d4, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x15840c7f, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xa6b12990, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x45a61548, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0xba036fee, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0xac1aa980, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x4fc03079, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa8393498, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0xcaba023c, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0xccc9a601, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xb86bedb9, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0x29a3308a, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x4c25880a, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0xfd75a3a1, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x2776dcf6, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xaf289c01, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x30ffc8db, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xa21a1c0e, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x8a5f5e5d, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x3c67d794, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x62e4f2b6, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9f1fbf10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x85c93c3c, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x3d25bc97, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0x6a331b40, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5be29f6a, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x81165bfe, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x8d597a5, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x229b8d46, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x9541d397, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0xd4ab1404, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0xf9e4b07a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x2166686, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0xc9442f5d, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ssb,bcma,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "F0E7DEFCB98E25BFE037170");
