#include <stdio.h>

int
main()
{
	float NaN;
	float zero;

	zero = 0.0;
	NaN = zero;
	NaN = zero/NaN;

	asm("# ----");
	if (NaN == NaN)
		printf("error\n");
	asm("# ----");
	return 0;
}
