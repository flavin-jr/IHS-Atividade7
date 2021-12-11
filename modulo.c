#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
MODULE_LICENSE("Dual BSD/GPL");

static int param = 5;

static int hello_init(void) {
    printk(KERN_ALERT "Ola mundo\n");
    return 0;
}

static void hello_exit(void) {
    printk(KERN_ALERT "Saindo, ate mais! - valor: %d\n", param);
}

module_param(param, int, 0);
module_init(hello_init);
module_exit(hello_exit);