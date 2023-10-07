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
	{ 0x66083eaf, "kernel_write" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0xf4c858c8, "filp_close" },
	{ 0x5dd43bfc, "path_get" },
	{ 0x91715312, "sprintf" },
	{ 0x61c5ae4f, "kernel_read" },
	{ 0xfb578fc5, "memset" },
	{ 0x60c957a7, "clx_driver_get_platform_bd" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2b093346, "g_dev_loglevel" },
	{ 0x21093a23, "s3ip_sysfs_syseeprom_drivers_register" },
	{ 0x8be774dd, "init_task" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc5ff5942, "file_open_root" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0d3a757, "s3ip_sysfs_syseeprom_drivers_unregister" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x41279caf, "clx_driver_identify" },
	{ 0x1d2bd0ef, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=clounix_platform,s3ip_sysfs";

