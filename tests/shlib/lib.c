#include <stdio.h>
#include <string.h>

int
lib_function(const char *s)
{
	int len = strlen(s);

	printf("String: \"%s\" (%d)\n", s, len);

	return len;
}
