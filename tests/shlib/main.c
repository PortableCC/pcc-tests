#include <stdio.h>

int
main()
{
	int rv;

	printf("before function\n");
	rv = lib_function("This is the string");
	printf("after function (%d)\n", rv);

	return rv;
}
