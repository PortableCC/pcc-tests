/*
 * Subject:    odd behavior with stdlib.h and stdio.h
 * From:       Travis Siegel <tsiegel () softcon ! com>
 * Date:       2010-09-01 13:18:05
 *
 * Fixed: It was a bug causing floats not
 * to be cast to double in the case of missing prototype.
 */
#include <stdlib.h>
int main()
{
	float a, b, c;
	a = 66;
	b = 24;
	c = a/b;

	printf("%f is the answer.\n",c);
	if (c != 2.7500)
		return 1; 

	return 0;
}
