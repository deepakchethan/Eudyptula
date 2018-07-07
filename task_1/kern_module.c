/*
 * lsmod: prints all the currently loaded modules
 * modinfo: prints the info about the particular module
 * insmod: insert a module
 * rmmod: remove a module
 * modprobe: intelligent way of working with modules, manages dependencies
 */
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
// __init, __exit macro will free the memory once module is unloaded
//
static int __init module_start(void){
  printk(KERN_DEBUG "Hello World!");
  return 0; // 0 for success
}
static void __exit module_end(void){
  printk(KERN_DEBUG "Bye World!");
  
}
module_init(module_start);
module_exit(module_end);
  
