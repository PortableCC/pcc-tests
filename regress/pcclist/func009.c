/*
 * From pcc-list, Guilherme Janczak.
 */
#include <stdio.h>

static void printhello(char *[static 1]);

int
main(void)
{
	char *p = "Hello, world!";
	char *hello[] = {p};
	printhello(hello);
	return 0;
}

static void
printhello(char *hello[static 1])
{
	puts(*hello);
}
