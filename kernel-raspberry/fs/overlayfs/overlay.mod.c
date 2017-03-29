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
	{ 0xbd5bd085, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8924e7bb, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x732b95f1, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x9b74189a, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x5e16189f, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0xc9b92b58, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x8a890db8, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0x2e84a54d, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x5dd81c4f, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xf5537135, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x5409183b, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x94baebd, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdce02a7f, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xd27de18d, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x6d86466, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x1523a858, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x4ebb18f4, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x66718fc7, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0xc7a9def0, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0x98c10645, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x5f8716ce, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x7bde4a0a, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xea96194b, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xe12cd5be, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0x4de96e2a, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x46c5b22e, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa12112c1, __VMLINUX_SYMBOL_STR(vfs_whiteout) },
	{ 0x33989b49, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf03a08b8, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xc425e1f2, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0xbb31b520, __VMLINUX_SYMBOL_STR(__check_sticky) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xa1657232, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x44f9e1b3, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x93669df8, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xc959b701, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0xf966b685, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xb36e3352, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x9669cc52, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xd27dbda6, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x57534d41, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x27f590f3, __VMLINUX_SYMBOL_STR(do_splice_direct) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x165aa1bb, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x58d779a, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xc3e7321, __VMLINUX_SYMBOL_STR(__inode_permission) },
	{ 0x88c1f206, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x8787956a, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x2bae716, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9e332395, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xaed0b5a, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xba0d2b34, __VMLINUX_SYMBOL_STR(clone_private_mount) },
	{ 0xf10c616c, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x6c4c009a, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xe13bd888, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0xca00526, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xb796b29d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x9e1ea1c9, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xa70acfb5, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0xc96d0daa, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0x371d3c53, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BF61618C724F91CDBAB8DE");
