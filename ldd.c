#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL"); //required
MODULE_AUTHOR("hailiang194");
MODULE_DESCRIPTION("Our first dynamically loadable kernel module");

static int __init hw_module_init(void)
{
    printk(KERN_INFO "Hello World! (from hailiang194)\n");
    return 0;
}

static void __exit hw_module_exit(void)
{
    printk(KERN_INFO "Good bye! (from hailian194)\n");
}

module_init(hw_module_init);
module_exit(hw_module_exit);