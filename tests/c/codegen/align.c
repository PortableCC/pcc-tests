#include <stdbool.h>
#include <stdio.h>

#ifdef __PCC__
#define __packed _Pragma("packed")
//#define __packed __attribute((packed))
#else
#define __packed __attribute__((packed))
#endif

#define STRUCT(prefix, name, type)		\
struct {					\
	type field;				\
} prefix name

#define STRUCTP(prefix, name, type, type2)	\
struct {					\
	type2 pad;				\
	type field;				\
} prefix name

#define INFO(name)						\
	printf("sizeof(" #name ") = %d, offsetof(filed)=%d\n",	\
		sizeof(name), (int)((char *)&name.field - (char *)&name))

#define STRUCT0(name, type)			\
	STRUCT(, name, type);			\
	STRUCT(__packed, packed_ ## name, type)

#define STRUCT1(name, type, type2)				\
	STRUCTP(, name, type, type2);				\
	STRUCTP(__packed , packed_ ## name, type, type2)

#define INFO1(name)				\
	INFO(name);				\
	INFO(packed_ ## name)

#define _STRUCT(name, type)				\
	STRUCT0(name ## _pad0, type);			\
	STRUCT1(name ## _pad1, type, char);		\
	STRUCT1(name ## _pad2, type, short);		\
	STRUCT1(name ## _pad4, type, int);		\
	STRUCT1(name ## _pad8, type, long long)

#define _INFO(name)				\
	INFO1(name ## _pad0);			\
	INFO1(name ## _pad1);			\
	INFO1(name ## _pad2);			\
	INFO1(name ## _pad4);			\
	INFO1(name ## _pad8)


_STRUCT(bool_st, bool);
_STRUCT(char_st, char);
_STRUCT(short_st, short);
_STRUCT(int_st, int);
_STRUCT(long_st, long);
_STRUCT(longlong_st, long long);
_STRUCT(float_st, float);
_STRUCT(double_st, double);
_STRUCT(ldouble_st, long double);

_STRUCT(bool_ptr_st, bool*);
_STRUCT(char_ptr_st, char*);
_STRUCT(short_ptr_st, short*);
_STRUCT(int_ptr_st, int*);
_STRUCT(long_ptr_st, long*);
_STRUCT(longlong_ptr_st, long long*);
_STRUCT(float_ptr_st, float*);
_STRUCT(double_ptr_st, double*);
_STRUCT(ldouble_ptr_st, long double*);

#define SIZE(name)						\
	printf("sizeof(" #name ") = %d\n", sizeof(name))

int
main(void)
{
	SIZE(bool);
	SIZE(char);
	SIZE(short);
	SIZE(int);
	SIZE(long);
	SIZE(long long);
	SIZE(float);
	SIZE(double);
	SIZE(long double);

	_INFO(bool_st);
	_INFO(char_st);
	_INFO(short_st);
	_INFO(int_st);
	_INFO(long_st);
	_INFO(longlong_st);
	_INFO(float_st);
	_INFO(double_st);
	_INFO(ldouble_st);

	_INFO(bool_ptr_st);
	_INFO(char_ptr_st);
	_INFO(short_ptr_st);
	_INFO(int_ptr_st);
	_INFO(long_ptr_st);
	_INFO(longlong_ptr_st);
	_INFO(float_ptr_st);
	_INFO(double_ptr_st);
	_INFO(ldouble_ptr_st);

	return 0;
}

