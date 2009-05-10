#ifndef _STDC_STDDEF_H_
#define _STDC_STDDEF_H_

#undef NULL
#if defined(__cplusplus)
#define NULL	0
#else
#define NULL	((void*)0)
#endif

typedef __SIZE_TYPE__		size_t;
typedef __PTRDIFF_TYPE__		ptrdiff_t;
typedef __WCHAR_TYPE__		wchar_t;

#define offsetof(st, m) \
    ((size_t)((char*)&((st*)(0))->m - (char*)0))
    

#endif
