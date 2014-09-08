/*
 * PCC-225
 * #include <limits.h> is not working on linux
 */

#include <float.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
	printf("%i %e\n", INT_MAX, DBL_MAX);

	return 0;
}
