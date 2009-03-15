/*
 * gcc quad.c /usr/local/lib/pcc/powerpc-apple-darwin/0.9.9/lib/libpcc.a
 */
#include <stdio.h>

#ifdef WIN32
#define FMT	"%I64x"
#else
#define FMT	"%llx"
#endif

#define EQUAL(x,y)							\
do {									\
	printf("line %d\n", __LINE__);					\
	if ((x) != (y))							\
		printf("FAILED: 0x" FMT " != 0x" FMT "\n", (x), (y));		\
} while(0)

long long __adddi3(long long, long long);
long long __anddi3(long long, long long);
long long __ashldi3(long long, unsigned int);
long long __ashrdi3(long long, unsigned int);
int __cmpdi2(long long, long long);
long long __divdi3(long long, long long);
long long __fixdfdi(double);
long long __fixsfdi(float);
unsigned long long __fixunsdfdi(double);
unsigned long long __fixunssfdi(float);
double __floatdidf(long long);
float __floatdisf(long long);
double __floatunsdidf(unsigned long long);
long long __iordi3(long long, long long);
long long __lshldi3(long long, unsigned int);
long long __lshrdi3(long long, unsigned int);
long long __moddi3(long long, long long);
long long __muldi3(long long, long long);
long long __negdi2(long long);
long long __one_cmpldi2(long long);
unsigned long long __qdivrem(unsigned long long, unsigned long long, unsigned long long *);
long long __subdi3(long long, long long);
int __ucmpdi2(unsigned long long, unsigned long long);
unsigned long long __udivdi3(unsigned long long, unsigned long long);
unsigned long long __umoddi3(unsigned long long, unsigned long long);
long long __xordi3(long long, long long);

int
main(void)
{
	unsigned long long v;
#ifdef NOT_IMPLEMENTED
	EQUAL(__adddi3(0x1000000000000002LL, 0x2000000000000003LL),
		0x3000000000000005LL);
	EQUAL(__subdi3(0x1000000000000002LL, 0x2000000000000003LL), 0x0);

	EQUAL(__anddi3(0x1000000000000002LL, 0x2000000000000003LL),
		0x0000000000000002LL);

	EQUAL(__iordi3(0x1000000000000002LL, 0x2000000000000003LL),
		0x3000000000000003LL);

	EQUAL(__xordi3(0x1000000000000002LL, 0x2000000000000003LL),
		0x3000000000000001LL);

	EQUAL(__one_cmpldi2(0x8000000000000003LL), 0x0LL);
#endif

	EQUAL(__ashldi3(0x1000000000000002LL,  1), 0x2000000000000004LL);
	EQUAL(__ashldi3(0x1000000000000002LL, 36), 0x0000002000000000LL);

#ifdef NOT_IMPLEMENTED
	EQUAL(__lshldi3(0x1000000000000002LL,  1), 0x2000000000000004LL);
	EQUAL(__lshldi3(0x1000000000000002LL, 36), 0x0000002000000000LL);
#endif

	EQUAL(__ashrdi3(0x8000000000000002LL,  1), 0xc000000000000001LL);
	EQUAL(__ashrdi3(0x8000000000000002LL, 36), 0xfffffffff8000000LL);

	EQUAL(__lshrdi3(0x8000000000000002LL,  1), 0x4000000000000001LL);
	EQUAL(__lshrdi3(0x8000000000000002LL, 36), 0x0000000008000000LL);

	printf("%d\n", __cmpdi2(0x8000000000000002LL, 0x1000000000000002LL));
	printf("%d\n", __cmpdi2(0x1000000000000002LL, 0x1000000000000002LL));
	printf("%d\n", __ucmpdi2(0x8000000000000002LL, 0x1000000000000002LL));
	printf("%d\n", __ucmpdi2(0x1000000000000002LL, 0x0000000000000002LL));

	EQUAL(__divdi3(0x1000000000000003LL, 0x0000000000000003LL),
		0x555555555555556LL);

	EQUAL(__moddi3(0x1000000000000003LL, 0x0000000000000005LL),
		0x0000000000000004LL);

	EQUAL(__muldi3(0x8000000000000003LL, 0x0000000000000006LL),
		0x12LL);

	EQUAL(__udivdi3(0x800000000000003LL, 0x0000000000000003LL),
		0x2AAAAAAAAAAAAABLL);

	EQUAL(__umoddi3(0x800000000000003LL, 0x0000000000000003LL),
		0x2LL);

	EQUAL(__qdivrem(0x8000000000000003LL, 0x100000000000003LL, &v),
		0x7fL);
	printf("v=0x%llx\n", v);

	EQUAL(__fixdfdi(-3.14E16), 0xFF9071DDCA0D8000LL);
	EQUAL(__fixsfdi(-3.14E16), 0xFF9071DE00000000LL);

	EQUAL(__fixunsdfdi(3.14E16), 0x6F8E2235F28000LL);
	EQUAL(__fixunssfdi(3.14E16), 0x6F8E2200000000LL);

	printf("%f\n", __floatdidf(0x6F8E2235F28000LL));
	printf("%f\n", __floatdisf(0x6F8E2200000000LL));
	printf("%f\n", __floatunsdidf(0x6F8E2235F28000LL));

	EQUAL(__negdi2(0x0010000000000001LL), 0xFFEFFFFFFFFFFFFFLL);

	return 0;
}
