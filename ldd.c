#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/proc_fs.h>

MODULE_LICENSE("GPL"); //required
MODULE_AUTHOR("hailiang194");
MODULE_DESCRIPTION("Our first dynamically loadable kernel module");

#define PROC_NAME "hl_proc"

static struct proc_dir_entry* proc_entry;
static struct proc_ops driver_ops = {

};

static int __init hw_module_init(void)
{
    pr_info("Hello World! (from hailiang194)\n");
    pr_info("Creating %s\n", PROC_NAME);
    proc_entry = proc_create(PROC_NAME, 0, NULL, &driver_ops);
    if(!proc_entry)
    {
        pr_err("Failed to created %s\n", PROC_NAME);
        return -1;
    }
    pr_info("Created: %s\n", PROC_NAME);
    return 0;
}

static void __exit hw_module_exit(void)
{
    pr_info("Closing %s...\n", PROC_NAME);
    proc_remove(proc_entry);
    pr_info("Good bye! (from hailiang194)\n");
}

module_init(hw_module_init);
module_exit(hw_module_exit);