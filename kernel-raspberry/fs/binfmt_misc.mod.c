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
	{ 0xf28d6f84, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x96a1d7e5, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xdd89816d, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x7d58a08f, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x2bae716, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa240069a, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x1db71ff2, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x57534d41, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x165aa1bb, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xb796b29d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xc094f2e3, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x44a83f81, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x9e332395, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xaed0b5a, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5dd81c4f, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x3115279, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xf5537135, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x44f9e1b3, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x96728834, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1f5ace2b, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xd8d4f7a0, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x888790f, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xcafae829, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x416e6f22, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x3df00dd7, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x24f23e3f, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xf4423ca8, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x84ccace2, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xd62ee678, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x83fa78d2, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x33989b49, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xefaec14f, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D2B5D202BA235ED4DE4D79C");
