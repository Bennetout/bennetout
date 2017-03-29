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
	{ 0x44b55487, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x113fa7f, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xfc38a4a6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe2731c2c, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x9abd4e2b, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xdc3469b8, __VMLINUX_SYMBOL_STR(cfg80211_find_vendor_ie) },
	{ 0x4bf46b8b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xd402a6b8, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1879fcbd, __VMLINUX_SYMBOL_STR(bridge_tunnel_header) },
	{ 0x2cbdd950, __VMLINUX_SYMBOL_STR(cfg80211_radar_event) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xcff672e7, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xd03b9888, __VMLINUX_SYMBOL_STR(cfg80211_report_wowlan_wakeup) },
	{ 0x297a67f4, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xa5338e93, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x3060877d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8a339450, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xe53904cc, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xff8fac32, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5d55dbcf, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x97106714, __VMLINUX_SYMBOL_STR(memdup_user_nul) },
	{ 0xafd1ecb1, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x304f6203, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8e087afb, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6b2f8ad4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x7bf8d33a, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa5827ec3, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9e40a8e2, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x3f95e7e2, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xd0b96b61, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x633e2f37, __VMLINUX_SYMBOL_STR(of_property_read_variable_u8_array) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x6005361b, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x69b18f43, __VMLINUX_SYMBOL_STR(rfc1042_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6af4b27a, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xc313a56a, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x6756906f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xf8aa6fb5, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x67066fe4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf443150b, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x8692a004, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0xfd5f0c37, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x47770af7, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped_rtnl) },
	{ 0xb2582bf7, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xad8ea065, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16a7486e, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x86c191e5, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5c18c00e, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x5a27a1a8, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x502972ab, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x864dce86, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3e686e3d, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x47254f97, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x7d841112, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0xf09de776, __VMLINUX_SYMBOL_STR(get_random_int) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x899379ef, __VMLINUX_SYMBOL_STR(ieee80211_bss_get_ie) },
	{ 0x56803616, __VMLINUX_SYMBOL_STR(cfg80211_tdls_oper_request) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xa6b12990, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x20229b02, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x8fc796ea, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x3fea4dc9, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0x885a4b70, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x6c9861da, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x71b31fcb, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x16d189f4, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xacc40d6d, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefd4fe13, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x8b53e814, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x6983c9c8, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xaf5c1113, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xdae749ba, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xaf9cffa9, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xbc4ded9c, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x3d4aca48, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x87ac11d6, __VMLINUX_SYMBOL_STR(kstrtobool_from_user) },
	{ 0x1a97f7fc, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xdf90535f, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x9552b56e, __VMLINUX_SYMBOL_STR(cfg80211_chandef_valid) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb654739e, __VMLINUX_SYMBOL_STR(cfg80211_find_ie_match) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xead8c526, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf0cf1d88, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7438e18b, __VMLINUX_SYMBOL_STR(ieee80211_amsdu_to_8023s) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x9f1fbf10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6a331b40, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x56ebf139, __VMLINUX_SYMBOL_STR(cfg80211_cac_event) },
	{ 0x291e7699, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7c46f93e, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x260c2bf4, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x627bde3, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x63260858, __VMLINUX_SYMBOL_STR(cfg80211_chandef_dfs_required) },
	{ 0xcdb41bcf, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x9b7fefa8, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x229b8d46, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xdba30a91, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xf9e4b07a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x56b48c4f, __VMLINUX_SYMBOL_STR(skb_complete_wifi_ack) },
	{ 0x67bbcb2d, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "89F483E4C9167A4A26FC318");