/*
 * enum checks.
 */
#include <stdio.h>

int
main(int arch, char **argv)
{
	enum foo {
		a1 = 1, a2, a3, a4 = 1000, a5
	};
	enum foo bar;

	bar = a3;
	if (bar != 3) {
		printf("a3 != 3\n");
		return 1;
	}
	bar = a5;
	if (bar != 1001) {
		printf("a5 != 1001\n");
		return 1;
	}
	return 0;
}
