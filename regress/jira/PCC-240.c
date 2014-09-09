/*
 * PCC-240
 * uli += flt done wrong
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned long int uli = 5u;
	unsigned long int uli3 = 3u;
	float f = 2.f;

	if (uli != (uli3 += f)) {
		printf("BAD\n");
		return 1;
	}

	return 0;
}
