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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x91715312, "sprintf" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2b093346, "g_dev_loglevel" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x400939c, "s3ip_sysfs_cpld_drivers_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x41279caf, "clx_driver_identify" },
	{ 0x28318305, "snprintf" },
	{ 0xc999ec98, "clounix_fpga_base" },
	{ 0xa3c7862a, "s3ip_sysfs_cpld_drivers_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=clounix_platform,s3ip_sysfs,fpga_dev_driver";

