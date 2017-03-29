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
	{ 0x40000904, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5bd6f26b, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x3186a04b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1625b23a, __VMLINUX_SYMBOL_STR(tm6000_unregister_extension) },
	{ 0x17f17f7e, __VMLINUX_SYMBOL_STR(tm6000_register_extension) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c153be, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xe8e972f2, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x9a1797b2, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ab6b2c9, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbf1facd9, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xa00b9b7c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x97ff7212, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_pow2) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x12286152, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x1ebde9e6, __VMLINUX_SYMBOL_STR(tm6000_set_audio_bitrate) },
	{ 0xea533e12, __VMLINUX_SYMBOL_STR(tm6000_set_reg_mask) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2df6329b, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xc074dc43, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x20a0df14, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x9ecadbe0, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,tm6000,snd";


MODULE_INFO(srcversion, "C40C728EEEEA28D83B3F77B");
