//***********************************************************************/
//    Author                    : Garry
//    Original Date             : Jun 4, 2013
//    Module Name               : config.h
//    Module Funciton           : 
//                                This file is used to configure the OS before compile it,
//                                it defines several switches that controls which module will or
//                                will not be included in the binary module.
//                                Developers can include or exclude one function module by turn on
//                                or turn off the corresponding switch.
//    Last modified Author      : 
//    Last modified Date        : 
//    Last modified Content     :
//                                1. 
//    Lines number              :
//***********************************************************************/

#define __CONFIG_H__  //Include switch.

//************************************************************************
//
//  Displayable information,such as version
//
//************************************************************************

#define VERSION_INFO "    HelloX [Version 1.760,build in 2014/05/10,by Garry.Xin]"
#define SLOGAN_INFO  "    HelloX OS,through which you can talk to everything."

//************************************************************************
//
//  Hardware platform pre-defined switches.
//
//************************************************************************

//Little endian or big endian.
#define __CFG_CPU_LE

//CPU types,the following definitions are exclusive.
//#define __I386__
//#define __ARM7__
//#define __ARM9__
//#define __ARM11__
#define __STM32__

//************************************************************************
//
//  Hardware related definitions.
//
//************************************************************************

//System time slice,in ms.You can adjust it,but you must configure the
//hardware to keep same as this definition.
#define SYSTEM_TIME_SLICE  10  //10 million seconds per tick.

//************************************************************************
//
//  Common system level parameters that can fit any hardware platform.
//  Developers can adjust system level performance by adjusting these
//  parameters,such as reduce the memory occupation.
//
//************************************************************************

//
//This value is the smallest stack size of a kernel thread in IA32 platform.
//
#define MIN_STACK_SIZE 128

//Maximal interrupt vector number.It controls the size of global interrupt
//object array,and can be modified according to hardware platform.For example,
//we can change it to 80 in STM32 platform to save memory.
#define MAX_INTERRUPT_VECTOR  128

//
//This value is the default stack size of a kernel thread in IA32 platform,
//if the user does not give a stack size in CreateKernelThread calling,then
//use this value as stack size.
//
#define DEFAULT_STACK_SIZE 0x00000400 //16k bytes.

//************************************************************************
//
//  System level pre-defined switches.
//
//************************************************************************

//Use Inline Schedule(IS) mode.The inline schedule means OS kernel can establish
//thread context without inte rrupt,only by normal instructions,and also can switch
//to a kernel thread without need in interrupt context.
//A type case for inline schedule is x86 platform,STM32 is contrast,which can not
//support inline schedule,i.e,kernel thread context must be restored in interrupt(handler)
//mode,please comment off this flag when migrate to this kind of CPU.
//#define __CFG_SYS_IS

//Include virtual memory management functions in OS.
//#define __CFG_SYS_VMM

//Include bus management code.
//#define __CFG_SYS_BM

//Use Free Block List(FBL) as default kernel memory management algorithm.It should
//be exclusive with __CFG_SYS_MMTFA switch.
#define __CFG_SYS_MMFBL

//Use Time Fixed Allocation(TFA) as default kernel memory management algorithm.
//It should be exclusive with __CFG_SYS_MMFBL switch.
//#define __CFG_SYS_MMTFA

//Device Driver Framework(DDF) function in OS.
#define __CFG_SYS_DDF

//Include CPU statistics functions in OS.
#define __CFG_SYS_CPUSTAT

//Include the default user shell thread in OS,only enable it when character
//output device is ready.
#define __CFG_SYS_SHELL

//Include console object into kernel.COM input and output functions are implemented
//in console object.
#define __CFG_SYS_CONSOLE


//************************************************************************
//
//  Pre-defined switches to control inline device drivers .
//
//************************************************************************

//Include IDE driver in OS.
//#define __CFG_DRV_IDE

//Include COM driver in OS.
//#define __CFG_DRV_COM

//Include USART driver in OS,specific for STM32 or ARM platform.
#define __CFG_DRV_USART

//Include MOUSE driver in OS.
//#define __CFG_DRV_MOUSE

//Include Key board driver in OS.
//#define __CFG_DRV_KEYBOARD

//************************************************************************
//
//  Pre-defined switches to control file system.
//
//************************************************************************

//Include FAT32 file system function in OS.
//#define __CFG_FS_FAT32

//Include NTFS file system function in OS.
//#define __CFG_FS_NTFS

//Include RAM file system in OS.
//#define __CFG_FS_RAM

//Include FLASH file system in OS.
//#define __CFG_FS_FLASH

//************************************************************************
//
//  Pre-defined switches to control network functions.
//
//************************************************************************

//Include IPv4 network protocol in OS.
//#define __CFG_NET_IPV4

//Include IPv6 network protocol in OS.
//#define __CFG_NET_IPV6

//************************************************************************
//
//  Pre-defined switches to control how to use this OS,and the user entry
//  point's priority if it's used as embedded operating system.
//
//************************************************************************

//Used as embedded OS,so user entry point should be loaded.
//#define __CFG_USE_EOS

//User entry point thread's priority if used as EOS.
#define __HCNMAIN_PRIORITY  PRIORITY_LEVEL_NORMAL

//User entry point thread's name.
#define __HCNMAIN_NAME      "HCN_Main"

//************************************************************************
//
//  More compiling switches can be added here.
//
//************************************************************************

//More compiling switches can be appended here.