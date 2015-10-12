#include <stdio.h>
#include <string.h>

#if defined(__GNUC__) || defined(__PCC__)
#define __constructor __attribute__((constructor))
#define __destructor __attribute__((destructor))
#endif

void __constructor
constuctor(void)
{
	printf("lib: constructor\n");
}

void __destructor
destuctor(void)
{
	printf("lib: destructor\n");
}

int
lib_function(const char *s)
{
	int len = strlen(s);

	printf("lib: string=\"%s\" (%d)\n", s, len);

	return len;
}
