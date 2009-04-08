#include <stdio.h>
#include <limits.h>

#define assert(x) if (!(x)) printf("Failed: " #x "\n");

void
test1()
{
	int a = 20;
	int b = -20;
	unsigned int c = 30;
	unsigned int d = (unsigned int)-30;

	int a1 = __builtin_abs(a);
	int b1 = __builtin_abs(b);
	unsigned int c1 = __builtin_abs(c);
	unsigned int d1 = __builtin_abs(d);

	assert(a1 == 20);
	assert(b1 == 20);
	assert(c1 == 30);

	/* undefined behaviour? */
	assert(d1 == (unsigned int)-30);
}

void
test2()
{
	long long a = LLONG_MAX - 1;
	long long b = -LLONG_MAX + 1;
	unsigned long long c = LLONG_MAX - 1;
	unsigned long long d = -LLONG_MAX + 1;

	long long a1 = __builtin_abs(a);
	long long b1 = __builtin_abs(b);
	unsigned long long c1 = __builtin_abs(c);
	unsigned long long d1 = __builtin_abs(d);

	assert(a1 == LLONG_MAX - 1);
	assert(b1 == LLONG_MAX - 1);
	assert(c1 == LLONG_MAX - 1);

	/* undefined behaviour? */
	assert(d1 == (unsigned long long)(-LLONG_MAX + 1));
}

void
test3()
{
	assert(__builtin_abs(-20) == 20);
	assert(__builtin_abs(20) == 20);
	assert(__builtin_abs(-20LL) == 20LL);
	assert(__builtin_abs(20LL) == 20LL);
}

int
main()
{
	test1();
	test2();
	test3();
	return 0;
}
