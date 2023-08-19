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
	{ 0xcf22a233, "kmalloc_caches" },
	{ 0x51de6db, "pci_free_irq_vectors" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0x3704c09f, "param_ops_int" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5012c233, "i2c_add_adapter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96b2f47c, "pci_alloc_irq_vectors_affinity" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x2b093346, "g_dev_loglevel" },
	{ 0x59eb2fbc, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8014b756, "i2c_del_adapter" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2883b311, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd790b88e, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x41279caf, "clx_driver_identify" },
	{ 0x1c52787a, "pci_get_device" },
	{ 0xc999ec98, "clounix_fpga_base" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=clounix_platform,fpga_dev_driver";

