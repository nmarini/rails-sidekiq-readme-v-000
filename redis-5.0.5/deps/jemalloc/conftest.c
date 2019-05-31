/* confdefs.h */
#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define JEMALLOC_HAS_RESTRICT 1
#define HAVE_CXX14 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define SIZEOF_VOID_P 8
#define LG_SIZEOF_PTR 3
#define SIZEOF_INT 4
#define LG_SIZEOF_INT 2
#define SIZEOF_LONG 8
#define LG_SIZEOF_LONG 3
#define SIZEOF_LONG_LONG 8
#define LG_SIZEOF_LONG_LONG 3
#define SIZEOF_INTMAX_T 8
#define LG_SIZEOF_INTMAX_T 3
#define HAVE_CPU_SPINWAIT 1
#define CPU_SPINWAIT __asm__ volatile("pause")
#define LG_VADDR 48
#define LG_VADDR 48
#define JEMALLOC_PURGE_MADVISE_DONTNEED_ZEROS  
#define JEMALLOC_HAS_ALLOCA_H 1
#define JEMALLOC_PROC_SYS_VM_OVERCOMMIT_MEMORY  
#define JEMALLOC_THREADED_INIT  
#define JEMALLOC_USE_CXX_THROW  
#define HAVE_MALLOC_H 1
#define JEMALLOC_USABLE_SIZE_CONST 
#define JEMALLOC_HAVE_ATTR  
#define JEMALLOC_HAVE_ATTR_ALLOC_SIZE  
#define JEMALLOC_HAVE_ATTR_FORMAT_GNU_PRINTF  
#define JEMALLOC_HAVE_ATTR_FORMAT_PRINTF  
#define JEMALLOC_PREFIX "je_"
#define JEMALLOC_CPREFIX "JE_"
#define JEMALLOC_OVERRIDE_MEMALIGN  
#define JEMALLOC_OVERRIDE_VALLOC  
#define JEMALLOC_PRIVATE_NAMESPACE je_
#define JEMALLOC_CONFIG_MALLOC_CONF ""
#define JEMALLOC_STATS  
#define JEMALLOC_MAPS_COALESCE  
#define JEMALLOC_RETAIN  
#define JEMALLOC_DSS  
#define JEMALLOC_FILL  
#define JEMALLOC_CACHE_OBLIVIOUS  
#define JEMALLOC_INTERNAL_UNREACHABLE __builtin_unreachable
#define JEMALLOC_INTERNAL_FFSLL __builtin_ffsll
#define JEMALLOC_INTERNAL_FFSL __builtin_ffsl
#define JEMALLOC_INTERNAL_FFS __builtin_ffs
#define LG_QUANTUM 3
#define LG_PAGE 12
#define LG_HUGEPAGE 21
#define JEMALLOC_HAVE_PTHREAD  
#define HAVE_PTHREAD_H 1
/* end confdefs.h.  */
#include <stdio.h>
#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif
#ifdef HAVE_SYS_STAT_H
# include <sys/stat.h>
#endif
#ifdef STDC_HEADERS
# include <stdlib.h>
# include <stddef.h>
#else
# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif
#endif
#ifdef HAVE_STRING_H
# if !defined STDC_HEADERS && defined HAVE_MEMORY_H
#  include <memory.h>
# endif
# include <string.h>
#endif
#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif
#ifdef HAVE_INTTYPES_H
# include <inttypes.h>
#endif
#ifdef HAVE_STDINT_H
# include <stdint.h>
#endif
#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif
#include <dlfcn.h>
