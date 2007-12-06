#include <stdio.h>

void (*funp)(char *);

void
test(char *s)
{
	printf("test: %s\n", s);
}

int
main()
{
        funp = test;

	test("direct");
        funp("indirect");

	return 0;
}
