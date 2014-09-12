/*
 * PCC-241
 * %= done wrong
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned char res;
	unsigned char uc = 1;

	res = uc %= 1LL;
	if (res) {
		printf("BAD\n");
		return 1;
	}

	return 0;
}
