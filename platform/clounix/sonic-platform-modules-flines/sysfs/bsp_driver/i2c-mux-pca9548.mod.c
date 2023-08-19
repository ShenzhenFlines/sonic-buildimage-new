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
	{ 0x1a88588b, "device_property_present" },
	{ 0xc0a5485c, "_dev_info" },
	{ 0x8dd02519, "device_create_file" },
	{ 0x1e2a7d26, "devm_request_threaded_irq" },
	{ 0x8141adc7, "_dev_warn" },
	{ 0xde94d6a9, "i2c_mux_add_adapter" },
	{ 0xfc9eeff7, "irq_create_mapping" },
	{ 0x6d64b2e9, "irq_set_chip_and_handler_name" },
	{ 0xc848462d, "handle_simple_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x72d466d2, "__irq_domain_add" },
	{ 0x67a9a4bd, "irq_domain_simple_ops" },
	{ 0xdd94896a, "device_property_read_u32_array" },
	{ 0x3d131377, "i2c_get_device_id" },
	{ 0xcb6efabf, "device_get_match_data" },
	{ 0x2a37ba04, "reset_mux_pca9548" },
	{ 0xa06fd845, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x45d9eb1, "devm_gpiod_get_optional" },
	{ 0xa80597c8, "i2c_mux_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xcec09ec3, "i2c_smbus_read_byte" },
	{ 0x7c9f92e5, "device_remove_file" },
	{ 0x7b1a2dfd, "i2c_mux_del_adapters" },
	{ 0xef30a5db, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x3d64b96, "irq_find_mapping" },
	{ 0x91715312, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x373db350, "kstrtoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x36cdeadb, "__i2c_smbus_xfer" },
	{ 0x7568f227, "_dev_err" },
	{ 0xc406056, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-mux,fpga_dev_driver";

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:clx_pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");
