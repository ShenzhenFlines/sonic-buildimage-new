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
	{ 0x311f34f5, "psu_add_priv" },
	{ 0x4d8141f8, "i2c_del_driver" },
	{ 0x4f24ff4, "pmbus_read_word_data" },
	{ 0x91715312, "sprintf" },
	{ 0xc4ae31d4, "devm_hwmon_device_register_with_groups" },
	{ 0x8870fd4f, "psu_del_priv" },
	{ 0xfe071402, "devm_kfree" },
	{ 0xba109836, "pmbus_do_remove" },
	{ 0x3c8c9f80, "i2c_register_driver" },
	{ 0xbbdac98f, "psu_del" },
	{ 0x3dc5f0f8, "i2c_smbus_read_block_data" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc2606802, "psu_add" },
	{ 0x844c1e05, "devm_kmalloc" },
	{ 0xc999ec98, "clounix_fpga_base" },
	{ 0x36bc2ac0, "pmbus_do_probe" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psu_dev_driver,pmbus_core,fpga_dev_driver";

MODULE_ALIAS("i2c:gw1200d");
MODULE_ALIAS("i2c:yesm1300am");
MODULE_ALIAS("of:N*T*Cgreatwall,_gw1200d");
MODULE_ALIAS("of:N*T*Cgreatwall,_gw1200dC*");
MODULE_ALIAS("of:N*T*C3y_power,_yesm1300am");
MODULE_ALIAS("of:N*T*C3y_power,_yesm1300amC*");
