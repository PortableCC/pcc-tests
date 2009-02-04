/*
 *  Check that crt sets up the stack correctly.
 */
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[], char *environ[])
{
	int i;
	char **p;

	for (i = 0; i < argc; i++)
		printf("%d: %s\n", i, argv[i]);

	p = environ;
	while (*p) {
		printf("%s\n", *p);
		p++;
	}

	printf("HOME=%s\n", getenv("HOME"));

	return 0;
}
