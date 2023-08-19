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
	{ 0x9190c196, "kset_create_and_add" },
	{ 0xcf22a233, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x272d2559, "sysfs_remove_bin_file" },
	{ 0x3704c09f, "param_ops_int" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6bea2be, "sysfs_remove_group" },
	{ 0xfb578fc5, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa4751e78, "sysfs_create_group" },
	{ 0xfba4dd2f, "kobject_init_and_add" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2883b311, "kmem_cache_alloc_trace" },
	{ 0x7791b051, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cab2bdd, "sysfs_create_bin_file" },
	{ 0x28318305, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

