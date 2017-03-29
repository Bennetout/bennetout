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
	{ 0x5e4862ee, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xad16cd3d, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x323db751, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x40910fc3, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7b0ff99c, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xd13b96aa, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0xb609f308, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x2790e452, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc4e533b6, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x911a9a01, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x3ea1fc9d, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xfebf73b2, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb52b78d1, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xb69ac353, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x7915d94f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x552fbd21, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x65712c9b, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x17fd6073, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x3a6de156, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x92bb117b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x8375a4ee, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x9ea3cbb3, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb02e83e4, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x57364105, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0xddf77c97, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x5a09fe0e, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0xf8d9277f, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x10eba855, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xde5ecf8a, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xf4ece487, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x47978d4d, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4addd0ff, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xa1bc0f0d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xb14fc203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x6e427f6a, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x95738e40, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x16a5e4e4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x5c19fa40, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x38fc8c7b, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x16e55cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7c8cbc5f, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5e6472b0, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x307283f6, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x61dfccb5, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xf02c5c04, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x1136f321, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3C06D450616B6D481E37E59");
