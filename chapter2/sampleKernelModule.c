#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int simple_init(void)
{
    printk(KERNEL_INFO "Loading module\n");
    return 0;
}

int simple_exit(void)
{
    printk(KERNEL_INFO "Exiting module\n");
    return 0;
}

module_init(simple_init);
module_exit(simple_exit);


MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("Monkye");