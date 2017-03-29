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
	{ 0x6ff22cf6, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1ca581a4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x7acef08, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x7dc83282, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8a70f2b4, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x263c83c5, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x60f5d8e3, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb1343344, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xa9c1d9, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xb5346a13, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x20ce9cbb, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x90c9e3a8, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x141ddb57, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6d3c84bb, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x3c424fe1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x8b8b1bd7, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xba9301c0, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xf8d1e132, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x24727ad8, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x8db1a4c5, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe416b9ea, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x176bb619, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x76691860, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x579facce, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x44a17598, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7e083c81, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x1149eeb4, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xfc36717e, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xac743e28, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x6b78a72d, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0xb68389eb, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x9e0ddcd9, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xebd23626, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1b765fd0, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x2ffbad85, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x94af632e, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbaf94fd2, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x7845bd9, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd61eaf36, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5baaba0, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa550f2e4, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe58d5181, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x2028d4b9, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe5096cdd, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0xcea122c0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30c4f7fe, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x84e6ee37, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xa7227053, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xac5df85c, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xe43e4506, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x5f8d571, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xe49441c5, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x4371e1b9, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xa4c6d1fb, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xe1c03e06, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x74ca77af, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xfc8b23f4, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9af05ae8, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xbba90331, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x63177734, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x41b8e1aa, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x78efe2e3, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xa751da7b, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xf472b264, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x843483d, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x7048c3a9, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x48df6c8f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1f9d0e3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbb4111c1, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x9164760c, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x8068d642, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x39722d21, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xe98e7331, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xc82effe0, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xdc2c4eb3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xdf6768f7, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x18bd1ae8, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x8c567761, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x4309f54a, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xafd89b62, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x4adf13a6, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x5917d53, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x20f18ea5, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd250f44a, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x6b13f5ba, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x5e50b0fc, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x6607a237, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x12ca457, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xc2cf12dd, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x19520835, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xf3ac556, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x2d819359, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb581e6d6, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5764a0e4, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd106e843, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x7df02556, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xcbffddc7, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x84b29511, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x70245ed7, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8b420411, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x22dedc90, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x47f03d19, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x46ce479b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xdd8a8f25, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9c053440, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x105fa62b, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x80d817ab, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x45f4466b, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2517c7c1, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xc0acaaa0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd25fda63, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb02435cb, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x2c5b7ea6, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x6f22b514, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "95B3AD6001BFEBA3DD93FB7");
