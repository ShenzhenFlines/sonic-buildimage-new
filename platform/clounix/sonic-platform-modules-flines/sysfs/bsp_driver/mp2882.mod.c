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
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x754d539c, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x391ece35, "pmbus_get_driver_info" },
	{ 0x4f24ff4, "pmbus_read_word_data" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2b093346, "g_dev_loglevel" },
	{ 0x856da3a, "curr_sensor_add" },
	{ 0xd2702327, "vol_sensor_add" },
	{ 0x36bc2ac0, "pmbus_do_probe" },
	{ 0xe502694f, "i2c_smbus_write_word_data" },
	{ 0x424ecf45, "i2c_smbus_read_word_data" },
	{ 0xbe485b91, "i2c_smbus_write_byte_data" },
	{ 0xb6c061b7, "get_vol_sensor_if" },
	{ 0x844c1e05, "devm_kmalloc" },
	{ 0xba109836, "pmbus_do_remove" },
	{ 0x78c2ef6e, "curr_sensor_del" },
	{ 0x39e4cc51, "vol_sensor_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core,clounix_platform,curr_sensor_dev_driver,vol_sensor_dev_driver";

MODULE_ALIAS("of:N*T*Cmps,mp2882");
MODULE_ALIAS("of:N*T*Cmps,mp2882C*");
MODULE_ALIAS("i2c:mp2882");
