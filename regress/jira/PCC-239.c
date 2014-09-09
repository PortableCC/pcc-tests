/*
 * PCC-239
 * unsigned bit field done wrong
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	static struct bits {
	    unsigned int ubi : 9;
	    signed int sbi : 7;
	    int pbi : 13;
	} bits;

	bits.ubi = 3;
	bits.sbi = 3;
	bits.pbi = 3;

	if (3 != bits.ubi) {
		printf("%i\n", bits.ubi); /* prints 8191 (2**13 - 1) */
		return 1;
	} 

	return 0;
}
