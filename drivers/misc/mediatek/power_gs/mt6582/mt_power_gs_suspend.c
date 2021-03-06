/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/seq_file.h>

#include <mach/mt_typedefs.h>
#include <mach/mt_power_gs.h>
#include <mach/sync_write.h>

extern unsigned int *mt6582_power_gs_suspend;
extern unsigned int mt6582_power_gs_suspend_len;

extern unsigned int *mt6323_power_gs_suspend;
extern unsigned int mt6323_power_gs_suspend_len;

#define slp_read(addr)              (*(volatile u32 *)(addr))
#define slp_write(addr, val)        mt65xx_reg_sync_writel(val, addr)

unsigned int mt6333_power_gs_suspend[] = {
    // Buck
    0x009F, 0x0080, 0x0000,
    0x00A0, 0x0007, 0x0000,
    0x006D, 0x007f, 0x0010,
};

void mt_power_gs_dump_suspend(void)
{
    mt_power_gs_compare("Suspend",                                            \
                        mt6582_power_gs_suspend, mt6582_power_gs_suspend_len, \
                        mt6323_power_gs_suspend, mt6323_power_gs_suspend_len, \
                        mt6333_power_gs_suspend, sizeof(mt6333_power_gs_suspend));
    if(slp_read(0xf0010044) != 0x88492480)
    {
    	printk("slp_read(0xf0010044)=0x%x\n",slp_read(0xf0010044));
//    	slp_write(0xf0010044, 0x88492480);
    }	
    if(slp_read(0xf0010040) != 0x00000080)
    {
    	printk("slp_read(0xf0010044)=0x%x\n",slp_read(0xf0010040));
//    	slp_write(0xf0010040, 0x00000080);
    }
    if(slp_read(0xf0010000) != 0x00000400)
    {
    	printk("slp_read(0xf0010000)=0x%x\n",slp_read(0xf0010000));
//    	slp_write(0xf0010000, 0x00000400);
    }
    if(slp_read(0xf0010004) != 0x00000820)
    {
    	printk("slp_read(0xf0010004)=0x%x\n",slp_read(0xf0010004));
//    	slp_write(0xf0010004, 0x00000820);
    }
    if(slp_read(0xf0010008) != 0x00000400)
    {
    	printk("slp_read(0xf0010008)=0x%x\n",slp_read(0xf0010008));
//    	slp_write(0xf0010008, 0x00000400);
    }
    if(slp_read(0xf001000C) != 0x00000100)
    {
    	printk("slp_read(0xf001000C)=0x%x\n",slp_read(0xf001000C));
//    	slp_write(0xf001000C, 0x00000100);
    }
    if(slp_read(0xf0010010) != 0x00000100)
    {
    	printk("slp_read(0xf0010010)=0x%x\n",slp_read(0xf0010010));
//    	slp_write(0xf0010010, 0x00000100);
    }
    if(slp_read(0xf0010014) != 0x00000100)
    {
    	printk("slp_read(0xf0010014)=0x%x\n",slp_read(0xf0010014));
//    	slp_write(0xf0010014, 0x00000100);
    }
    if(slp_read(0xf0010068) != 0x0000002)
    {
    	printk("slp_read(0xf0010068)=0x%x\n",slp_read(0xf0010068));
//    	slp_write(0xf0010068, 0x00000002);
    }
    if(slp_read(0xf0010050) != 0x00000000)
    {
    	printk("slp_read(0xf0010050)=0x%x\n",slp_read(0xf0010050));
//    	slp_write(0xf0010050, 0x00000000);
    }
    if(slp_read(0xf0010824) != 0x24248800)
    {
    	printk("slp_read(0xf0010824)=0x%x\n",slp_read(0xf0010824));
//    	slp_write(0xf0010824, 0x24248800);
    }
    if(slp_read(0xf0010820) != 0x00000000)
    {
    	printk("slp_read(0xf0010820)=0x%x\n",slp_read(0xf0010820));
//    	slp_write(0xf0010820, 0x00000000);
    }
    if(slp_read(0xf0010800) != 0x00008000)
    {
    	printk("slp_read(0xf0010800)=0x%x\n",slp_read(0xf0010800));
//    	slp_write(0xf0010800, 0x00008000);
    }
    if(slp_read(0xf0010804) != 0x00008000)
    {
    	printk("slp_read(0xf0010804)=0x%x\n",slp_read(0xf0010804));
//    	slp_write(0xf0010804, 0x00008000);
    }
    if(slp_read(0xf0010808) != 0x00008000)
    {
    	printk("slp_read(0xf0010808)=0x%x\n",slp_read(0xf0010808));
//    	slp_write(0xf0010808, 0x00008000);
    }
    if(slp_read(0xf001080C) != 0x00008000)
    {
    	printk("slp_read(0xf001080C)=0x%x\n",slp_read(0xf001080C));
//    	slp_write(0xf001080C, 0x00008000);
    }
    if(slp_read(0xf0010810) != 0x00008000)
    {
    	printk("slp_read(0xf0010810)=0x%x\n",slp_read(0xf0010810));
//    	slp_write(0xf0010810, 0x00008000);
    }
}

#if LINUX_VERSION_CODE < KERNEL_VERSION(3, 10, 0)
static int dump_suspend_read(char *buf, char **start, off_t off, int count, int *eof, void *data)
{
    int len = 0;
    char *p = buf;

    p += sprintf(p, "mt_power_gs : suspend\n");

    mt_power_gs_dump_suspend();

    len = p - buf;
    return len;
}
#else
static int dump_suspend_read(struct seq_file *m, void *v)
{
    seq_printf(m, "mt_power_gs : suspend\n");
    mt_power_gs_dump_suspend();
    return 0;
}

static int proc_mt_power_gs_dump_suspend_open(struct inode *inode, struct file *file)
{
    return single_open(file, dump_suspend_read, NULL);
}
static const struct file_operations mt_power_gs_dump_suspend_proc_fops = {
    .owner = THIS_MODULE,
    .open  = proc_mt_power_gs_dump_suspend_open, 
    .read  = seq_read,
};
#endif

static void __exit mt_power_gs_suspend_exit(void)
{
    //return 0;
}

static int __init mt_power_gs_suspend_init(void)
{
    struct proc_dir_entry *mt_entry = NULL;

    if (!mt_power_gs_dir)
    {
        printk("[%s]: mkdir /proc/mt_power_gs failed\n", __FUNCTION__);
    }
    else
    {
        #if LINUX_VERSION_CODE < KERNEL_VERSION(3, 10, 0)
        mt_entry = create_proc_entry("dump_suspend", S_IRUGO | S_IWUSR | S_IWGRP, mt_power_gs_dir);
        if (mt_entry)
        {
            mt_entry->read_proc = dump_suspend_read;
        }
        #else
        if (proc_create("dump_suspend", S_IRUGO | S_IWUSR | S_IWGRP, mt_power_gs_dir, &mt_power_gs_dump_suspend_proc_fops) == NULL) {
            pr_err("%s: create_proc_entry dump_suspend failed\n", __FUNCTION__);
        }
        #endif
    }

    return 0;
}

module_init(mt_power_gs_suspend_init);
module_exit(mt_power_gs_suspend_exit);

MODULE_DESCRIPTION("MT6582 Power Golden Setting - Suspend");
