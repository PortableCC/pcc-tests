#include <stdio.h>
#include <assert.h>

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

	assert(a == 10);
	assert(z == 13);
	assert(y == -10);
	assert(x == 3);
	assert(w == 12);
	assert(v == 5);
	assert(u == 6);
	assert(t == 7);
	assert(s == 2);

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

	printf("a=%ld\n", a);
	printf("z=%ld\n", z);
	printf("y=%ld\n", y);
	printf("x=%ld\n", x);
	printf("w=%ld\n", w);

	assert(a == 10);
	assert(z == 13);
	assert(y == -10);
	assert(x == 3);
	assert(w == 12);
	assert(v == 5);
	assert(u == 6);
	assert(t == 7);
	assert(s == 2);

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

	assert(a == 10);
	assert(z == 13);
	assert(y == 10);
	assert(x == 3);
	assert(w == 12);
	assert(v == 5);
	assert(u == 6);
	assert(t == 7);
	assert(s == 2);

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

	assert(a == 10);
	assert(z == 13);
	assert(y == 10);
	assert(x == 3);
	assert(w == 12);
	assert(v == 5);
	assert(u == 6);
	assert(t == 7);
	assert(s == 2);

	return 0;
}

int
main()
{
	test1();
	test2();
	test3();
	test4();
}
