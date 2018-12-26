#define __LKL__ARCH_WANT_SYSCALL_NO_AT
#define __LKL__ARCH_WANT_SYSCALL_DEPRECATED
#define __LKL__ARCH_WANT_SYSCALL_NO_FLAGS
#define __LKL__ARCH_WANT_RENAMEAT

#if __LKL__BITS_PER_LONG == 64
#define __LKL__ARCH_WANT_SYS_NEWFSTATAT
#endif

#include <lkl/asm-generic/unistd.h>

#define __lkl__NR_virtio_mmio_device_add		(__lkl__NR_arch_specific_syscall + 0)
