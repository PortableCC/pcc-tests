/*
 * Commonly there is a problem with wchar_t.  It is defined in libpcc_stddef.h
 * but is also defined in wchar.h, inttypes.h and numerous other headers.
 */

#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <float.h>

extern int printf(const char*, ...);

#define PRINT_INT(x) printf(#x ": %d\n", x)
#define PRINT_UINT(x) printf(#x ": %u\n", x)
#define PRINT_FLOAT(x) printf(#x ": %f\n", x)
#define PRINT_DOUBLE(x) printf(#x ": %lf\n", x)
#define PRINT_LDOUBLE(x) printf(#x ": %lf\n", x)

void
dump_intrinsics(void)
{
	PRINT_UINT(sizeof(_Bool));
	PRINT_UINT(sizeof(char));
	PRINT_UINT(sizeof(short));
	PRINT_UINT(sizeof(int));
	PRINT_UINT(sizeof(long));
	PRINT_UINT(sizeof(long long));
	PRINT_UINT(sizeof(float));
	PRINT_UINT(sizeof(double));
	PRINT_UINT(sizeof(long double));
	PRINT_UINT(sizeof(void));

	PRINT_UINT(sizeof(_Bool*));
	PRINT_UINT(sizeof(char*));
	PRINT_UINT(sizeof(short*));
	PRINT_UINT(sizeof(int*));
	PRINT_UINT(sizeof(long*));
	PRINT_UINT(sizeof(long long*));
	PRINT_UINT(sizeof(float*));
	PRINT_UINT(sizeof(double*));
	PRINT_UINT(sizeof(long double*));
	PRINT_UINT(sizeof(void*));
}

void
dump_float_h(void)
{
#ifdef FLT_RADIX
	PRINT_UINT(FLT_RADIX);
#endif
#ifdef FLT_EVAL_METHOD
	PRINT_UINT(FLT_EVAL_METHOD);
#endif
#ifdef DECIMAL_DIG
	PRINT_UINT(DECIMAL_DIG);
#endif
	PRINT_UINT(FLT_ROUNDS);

	PRINT_UINT(FLT_MANT_DIG);
	PRINT_UINT(FLT_DIG);
	PRINT_FLOAT(FLT_EPSILON);
	PRINT_INT(FLT_MIN_EXP);
	PRINT_FLOAT(FLT_MIN);
	PRINT_INT(FLT_MIN_10_EXP);
	PRINT_INT(FLT_MAX_EXP);
	PRINT_FLOAT(FLT_MAX);
	PRINT_INT(FLT_MAX_10_EXP);

	PRINT_UINT(DBL_MANT_DIG);
	PRINT_UINT(DBL_DIG);
	PRINT_DOUBLE(DBL_EPSILON);
	PRINT_INT(DBL_MIN_EXP);
	PRINT_DOUBLE(DBL_MIN);
	PRINT_INT(DBL_MIN_10_EXP);
	PRINT_INT(DBL_MAX_EXP);
	PRINT_DOUBLE(DBL_MAX);
	PRINT_INT(DBL_MAX_10_EXP);

	PRINT_UINT(LDBL_MANT_DIG);
	PRINT_UINT(LDBL_DIG);
	PRINT_LDOUBLE(LDBL_EPSILON);
	PRINT_INT(LDBL_MIN_EXP);
	PRINT_LDOUBLE(LDBL_MIN);
	PRINT_INT(LDBL_MIN_10_EXP);
	PRINT_INT(LDBL_MAX_EXP);
	PRINT_LDOUBLE(LDBL_MAX);
	PRINT_INT(LDBL_MAX_10_EXP);
}

void
dump_stdarg_h(void)
{
	PRINT_UINT(sizeof(va_list));
}

void
dump_stdbool_h(void)
{
	PRINT_UINT(sizeof(bool));
	PRINT_UINT(true);
	PRINT_UINT(false);
}

void
dump_stddef_h(void)
{
	PRINT_UINT(sizeof(L'\x20AC'));

#ifdef _WCHAR_T
	PRINT_UINT(sizeof(wchar_t));
#endif

#ifdef _PTRDIFF_T
	PRINT_UINT(sizeof(ptrdiff_t));
#endif
#ifdef _SIZE__T
	PRINT_UINT(sizeof(size_t));
#endif
#ifdef _OFF_T
	PRINT_UINT(sizeof(off_t));
#endif
#ifdef _WINT_T
	PRINT_UINT(sizeof(wint_t));
#endif
#ifdef NULL
	PRINT_INT(NULL);
#endif
}

int
main(void)
{
	dump_intrinsics();
	dump_float_h();
	dump_stdarg_h();
	dump_stdbool_h();
	dump_stddef_h();

	return 0;
}
