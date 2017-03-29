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
	{ 0x1308d555, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5affe4e7, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x40761ef2, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd5982fe1, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9ea0a346, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xdff5c7d2, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x4324b812, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xe3ea61d0, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x214d717d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x4a722b88, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xf3503a20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5f2a7fd, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x4bf65075, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xef6bc050, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x5841a584, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x4cabed9, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x733823bd, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3e1967a9, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x487ca03d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x4b4d3c3, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf92f521b, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x8fe3a411, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xcb2d991f, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xe182688, __VMLINUX_SYMBOL_STR(class_dev_iter_init) },
	{ 0x3ba21e42, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x7e557daf, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd5cfaa2c, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xbc691909, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf3342c6e, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x9494ac88, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x634904c6, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xff88d5bc, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xfeafd0c, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x7073c5fa, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5addeb10, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x4e3affbc, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xf93e65f5, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x141e1fe9, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdc58973f, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x624a7ce0, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf59adb0c, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xbb4f295d, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x93a0515a, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x6e5b7ebd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe89a7fe2, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xfdd1fc2, __VMLINUX_SYMBOL_STR(class_dev_iter_exit) },
	{ 0x1f47c0af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x5428ec2a, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c2193ec, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf87bbe9c, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xd5cb6056, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0x1465333c, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xabfcfac5, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0x46ce479b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x957a145f, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xd9d10196, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x631121ed, __VMLINUX_SYMBOL_STR(class_dev_iter_next) },
	{ 0xcd9e4d6a, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill";


MODULE_INFO(srcversion, "2CDDECA0601B0F541CB2879");