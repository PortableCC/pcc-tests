/*
 * PCC-207
 * structure initialisation issue
 */

#include <stdio.h>

typedef struct { long double value; const char *string; } yy_t;

int main(int argc, char *argv[])
{
	static yy_t data[1] = { { 1.234L, "1.234" } };

	printf("%Lf %s\n", data[0].value, data[0].string);
	if (data[0].string == (const char *)0L)
		return 1;

	return 0;
}
