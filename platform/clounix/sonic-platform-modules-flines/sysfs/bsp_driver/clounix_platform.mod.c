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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x3704c09f, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7ec995d7, "i2c_put_adapter" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1e11a315, "param_ops_charp" },
	{ 0x7c32d0f0, "printk" },
	{ 0x28245b05, "i2c_smbus_xfer" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x63e2d044, "param_array_ops" },
	{ 0x28318305, "snprintf" },
	{ 0x2b6cbebf, "i2c_get_adapter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

