/*
 * PCC-247
 * long double from unsigned long int done wrong (gets negative value)
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	long double d = (long double)0xd0cf4b50uL;

	if (d != 3503246160.0) {
		printf("%Lf\n", d);
		return 1;
	}

	return 0;
}
