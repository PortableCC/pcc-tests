/*
 *  Try compiling with and without optimisations.
 */
#include <stdio.h>

#define EQUAL(x,y)						\
do {								\
	if (x != y)						\
		printf("%d: FAIL: 0x%llxLL == 0x%llxLL\n",	\
			__LINE__, x, y);			\
} while(0)

int
test1()
{
	int a = 10;

	int z = a + 3;
	int y = z - 23;
	int x = y / -3;
	int w = x * 4;
	int v = w % 7;
	int u = v ^ 3;
	int t = u | 3;
	int s = t & 2;

	EQUAL(a, 10);
	EQUAL(z, 13);
	EQUAL(y, -10);
	EQUAL(x, 3);
	EQUAL(w, 12);
	EQUAL(v, 5);
	EQUAL(u, 6);
	EQUAL(t, 7);
	EQUAL(s, 2);

	return 0;
}

int
test2()
{
	long long a = 10;

	long long z = a + 3;
	long long y = z - 23;
	long long x = y / -3;
	long long w = x * 4;
	long long v = w % 7;
	long long u = v ^ 3;
	long long t = u | 3;
	long long s = t & 2;

	EQUAL(a, 10);
	EQUAL(z, 13);
	EQUAL(y, -10);
	EQUAL(x, 3);
	EQUAL(w, 12);
	EQUAL(v, 5);
	EQUAL(u, 6);
	EQUAL(t, 7);
	EQUAL(s, 2);

	return 0;
}

int
test3()
{
	unsigned int a = 10;

	unsigned int z = a + 3;
	unsigned int y = z - 3;
	unsigned int x = y / 3;
	unsigned int w = x * 4;
	unsigned int v = w % 7;
	unsigned int u = v ^ 3;
	unsigned int t = u | 3;
	unsigned int s = t & 2;

	EQUAL(a, 10);
	EQUAL(z, 13);
	EQUAL(y, 10);
	EQUAL(x, 3);
	EQUAL(w, 12);
	EQUAL(v, 5);
	EQUAL(u, 6);
	EQUAL(t, 7);
	EQUAL(s, 2);

	return 0;
}

int
test4()
{
	unsigned long long a = 10;

	unsigned long long z = a + 3;
	unsigned long long y = z - 3;
	unsigned long long x = y / 3;
	unsigned long long w = x * 4;
	unsigned long long v = w % 7;
	unsigned long long u = v ^ 3;
	unsigned long long t = u | 3;
	unsigned long long s = t & 2;

	EQUAL(a, 10);
	EQUAL(z, 13);
	EQUAL(y, 10);
	EQUAL(x, 3);
	EQUAL(w, 12);
	EQUAL(v, 5);
	EQUAL(u, 6);
	EQUAL(t, 7);
	EQUAL(s, 2);

	return 0;
}

int
test5()
{
	long long a = 0x80000001ffffffffLL;

	long long z = a + 0x1000000100000001LL;
	long long y = z - 0x10000001ffffffffLL;
	long long x = y / 0x0000000110000003LL;
	long long w = x * 0x0000000120000002LL;
	long long v = w % 0x0000000200000001LL;
	long long u = v ^ 0xa5a5a5a5a5a5a5a5LL;
	long long t = u | 0xf1f1f1f1f1f1f1f1LL;
	long long s = t & 0x0000ffff00ff00ffLL;

	EQUAL(a, 0x80000001ffffffffLL);
	EQUAL(z, 0x9000000300000000LL);
	EQUAL(y, 0x8000000100000001LL);
	EQUAL(x, 0xffffffff8787878aLL);
	EQUAL(w, 0x7878787a4f0f0f14LL);
	EQUAL(v, 0x0000000012d2d2d7LL);
	EQUAL(u, 0xa5a5a5a5b7777772LL);
	EQUAL(t, 0xf5f5f5f5f7f7f7f3LL);
	EQUAL(s, 0xf5f500f700f3LL);

	return 0;
}

int
test6()
{
	unsigned long long a = 0x80000001ffffffffLL;

	unsigned long long z = a + 0x1000000100000001LL;
	unsigned long long y = z - 0x10000001ffffffffLL;
	unsigned long long x = y / 0x0000000110000003LL;
	unsigned long long w = x * 0x0000000120000002LL;
	unsigned long long v = w % 0x0000000200000001LL;
	unsigned long long u = v ^ 0xa5a5a5a5a5a5a5a5LL;
	unsigned long long t = u | 0xf1f1f1f1f1f1f1f1LL;
	unsigned long long s = t & 0x0000ffff00ff00ffLL;

	EQUAL(a, 0x80000001ffffffffLL);
	EQUAL(z, 0x9000000300000000LL);
	EQUAL(y, 0x8000000100000001LL);
	EQUAL(x, 0x0000000078787878LL);
	EQUAL(w, 0x87878787f0f0f0f0LL);
	EQUAL(v, 0x00000001ad2d2d2dLL);
	EQUAL(u, 0xa5a5a5a408888888LL);
	EQUAL(t, 0xf5f5f5f5f9f9f9f9LL);
	EQUAL(s, 0xf5f500f900f9LL);

	return 0;
}


int
main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
}
