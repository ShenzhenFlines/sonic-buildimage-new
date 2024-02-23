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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x51de6db, "pci_free_irq_vectors" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0x77358855, "iomem_resource" },
	{ 0xae56c810, "pci_disable_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x70e3d262, "__devm_release_region" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x91715312, "sprintf" },
	{ 0xa6bea2be, "sysfs_remove_group" },
	{ 0xe4e4337, "clx_i2c_write" },
	{ 0xe70b45c6, "s3ip_sysfs_fpga_drivers_unregister" },
	{ 0x88439861, "pci_set_master" },
	{ 0x96b2f47c, "pci_alloc_irq_vectors_affinity" },
	{ 0x8adb2c34, "clx_i2c_read" },
	{ 0xe4b8943c, "clx_driver_get_platform_bd" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa4751e78, "sysfs_create_group" },
	{ 0x2b093346, "g_dev_loglevel" },
	{ 0x59eb2fbc, "pci_read_config_word" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf06d735c, "s3ip_sysfs_fpga_drivers_register" },
	{ 0xa768898d, "pci_clear_master" },
	{ 0xe8055b33, "pci_find_capability" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x282c40bc, "sysfs_remove_file_ns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x83fc4cf3, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x9103deb1, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0xd790b88e, "pci_irq_vector" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xe3627eb1, "pci_msi_vec_count" },
	{ 0xedc03953, "iounmap" },
	{ 0x47381ed0, "devm_ioremap" },
	{ 0x5fab38b3, "__pci_register_driver" },
	{ 0x41279caf, "clx_driver_identify" },
	{ 0x40d59096, "unregister_restart_handler" },
	{ 0xecaa9868, "devm_iounmap" },
	{ 0x28318305, "snprintf" },
	{ 0x3b4edc15, "sysfs_create_file_ns" },
	{ 0xd156dce, "pci_enable_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=clounix_platform,s3ip_sysfs";

MODULE_ALIAS("pci:v000010EEd00007021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc*sc*i*");
