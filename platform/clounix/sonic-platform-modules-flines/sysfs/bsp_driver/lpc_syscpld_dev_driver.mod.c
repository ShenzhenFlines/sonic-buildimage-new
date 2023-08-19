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
	{ 0x85bd1608, "__request_region" },
	{ 0xa1aaef1e, "pci_write_config_dword" },
	{ 0x9f96825a, "pci_write_config_word" },
	{ 0x65609c90, "pci_write_config_byte" },
	{ 0x91715312, "sprintf" },
	{ 0xa6bea2be, "sysfs_remove_group" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa4751e78, "sysfs_create_group" },
	{ 0x2b093346, "g_dev_loglevel" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x41279caf, "clx_driver_identify" },
	{ 0x1c52787a, "pci_get_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=clounix_platform";

