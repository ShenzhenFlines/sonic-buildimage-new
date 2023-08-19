#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x91eae1f5, "module_layout" },
	{ 0x9178b19b, "kobject_put" },
	{ 0xcf22a233, "kmalloc_caches" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x3704c09f, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x53334ec7, "kernfs_put" },
	{ 0x5478d7ec, "kobject_del" },
	{ 0x91715312, "sprintf" },
	{ 0xa6bea2be, "sysfs_remove_group" },
	{ 0xddf6dbdb, "kobject_create_and_add" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4751e78, "sysfs_create_group" },
	{ 0x8adee9ea, "kernfs_find_and_get_ns" },
	{ 0x1aeeb17f, "sysfs_remove_link" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbe0d9506, "sysfs_create_link" },
	{ 0x2ca9182a, "kernfs_get" },
	{ 0x282c40bc, "sysfs_remove_file_ns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2883b311, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b4edc15, "sysfs_create_file_ns" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

