/*
 *  Check that structure copies using memcpy() are correctly aligned.
 */

#include <stdio.h>

struct X {
	char i;
	char arr[100];
};

struct X
func(struct X x)
{
	return x;
}

int
main()
{
	struct X x, y, z;

	x.i = 10;
	y = x;
	z = func(y);

	printf("z.i=%d (should be 10)\n", z.i);

	return 0;
}
