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
	{ 0xebe59e59, "cpu_sibling_map" },
	{ 0x7c9f92e5, "device_remove_file" },
	{ 0xcf22a233, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1a675dfe, "__cpuhp_remove_state" },
	{ 0x40d12632, "hwmon_device_register_with_groups" },
	{ 0x3704c09f, "param_ops_int" },
	{ 0x9183ddc1, "hwmon_device_unregister" },
	{ 0xa1fce0bd, "cpu_info" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x72fea750, "_dev_notice" },
	{ 0x91715312, "sprintf" },
	{ 0xa6bea2be, "sysfs_remove_group" },
	{ 0x3840973a, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8141adc7, "_dev_warn" },
	{ 0xc4ae31d4, "devm_hwmon_device_register_with_groups" },
	{ 0xbb35675b, "__bitmap_intersects" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4751e78, "sysfs_create_group" },
	{ 0x3b167806, "platform_device_alloc" },
	{ 0x17be3acf, "platform_device_add" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28409b4e, "pci_get_domain_bus_and_slot" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xae99e5ee, "platform_device_unregister" },
	{ 0xbf1e932f, "__cpuhp_setup_state" },
	{ 0x7568f227, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8dd02519, "device_create_file" },
	{ 0x1e79d52d, "s3ip_cpu_temp_sensor_del" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x163a3cd2, "cpumask_next_and" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2883b311, "kmem_cache_alloc_trace" },
	{ 0xe67254fc, "__dynamic_dev_dbg" },
	{ 0x5ecfeec6, "__per_cpu_offset" },
	{ 0x20ba4f3e, "rdmsr_on_cpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x39081193, "__max_logical_packages" },
	{ 0xbb5388ca, "s3ip_cpu_temp_sensor_add" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x28318305, "snprintf" },
	{ 0x239fc8dd, "platform_driver_unregister" },
	{ 0x844c1e05, "devm_kmalloc" },
	{ 0x8303ac5, "x86_match_cpu" },
	{ 0x4507f4a8, "cpuhp_tasks_frozen" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x719f2b67, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon-vid,temp_sensor_dev_driver";

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C0*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000A:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000D:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0006mod000F:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0005fam0007mod*:feature:*");
