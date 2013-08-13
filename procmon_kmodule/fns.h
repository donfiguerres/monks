#ifndef FNS_H_INCLUDED
#define FNS_H_INCLUDED

#include "syshijack.h"

extern asmlinkage ssize_t (*real_sys_read)(unsigned int fd, char __user *buf, size_t count);
extern asmlinkage ssize_t hooked_sys_read(unsigned int fd, char __user *buf, size_t count);

#ifdef CONFIG_IA32_EMULATION
extern asmlinkage ssize_t (*real_sys_read32)(unsigned int fd, char __user *buf, size_t count);
extern asmlinkage ssize_t hooked_sys_read32(unsigned int fd, char __user *buf, size_t count);
#endif

#endif