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
	{ 0x4d8141f8, "i2c_del_driver" },
	{ 0x3c8c9f80, "i2c_register_driver" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x717e270d, "i2c_smbus_read_byte_data" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbe485b91, "i2c_smbus_write_byte_data" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd8adc665, "device_create" },
	{ 0xc400cdf0, "__class_create" },
	{ 0x3c52ccd6, "cdev_add" },
	{ 0xc60dfacd, "cdev_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x874ca612, "class_destroy" },
	{ 0x7f52fd74, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1ebc5eaa, "cdev_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

