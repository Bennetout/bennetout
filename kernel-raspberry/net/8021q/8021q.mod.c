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
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc0f0829, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0xf2c56397, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x323db751, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0xeaba5254, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf2e34fb2, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x40910fc3, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0xff873c63, __VMLINUX_SYMBOL_STR(garp_uninit_applicant) },
	{ 0xb5f9c7ee, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x7b0ff99c, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x729c4c85, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb4b6d63, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9af3ea0a, __VMLINUX_SYMBOL_STR(garp_request_join) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa9ab9610, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xc894a799, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x59fd151c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x2459616f, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x911a9a01, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x3ea1fc9d, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xfebf73b2, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7494b9ca, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x97c60d91, __VMLINUX_SYMBOL_STR(dev_add_offload) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xb52b78d1, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xb69ac353, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x39009fc4, __VMLINUX_SYMBOL_STR(garp_init_applicant) },
	{ 0x2eab272c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xe73f9b94, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0xcd7c13bd, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x552fbd21, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xac992d45, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb4e9eef2, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92bb117b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x8375a4ee, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x9ea3cbb3, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd25a73d2, __VMLINUX_SYMBOL_STR(garp_register_application) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x57364105, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x899820e3, __VMLINUX_SYMBOL_STR(dev_remove_offload) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc2d76a5d, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0xdd785159, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x5a09fe0e, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x10ffb942, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0xf8d9277f, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x10eba855, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x804c00c9, __VMLINUX_SYMBOL_STR(garp_request_leave) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x47978d4d, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x70b6dfa3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x68efecfe, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xa1bc0f0d, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xb14fc203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x6e427f6a, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x1872e39a, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7f7564af, __VMLINUX_SYMBOL_STR(garp_unregister_application) },
	{ 0x95738e40, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xfb28fecd, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x16a5e4e4, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc6ac0247, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x5c19fa40, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x540a2577, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x49f71442, __VMLINUX_SYMBOL_STR(dev_close_many) },
	{ 0x16e55cb9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7c8cbc5f, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5e6472b0, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x307283f6, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x90a37525, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x124f12d7, __VMLINUX_SYMBOL_STR(__wait_rcu_gp) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xf02c5c04, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x1b2b922, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x1136f321, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=garp";


MODULE_INFO(srcversion, "2F888837C8B062475542416");
