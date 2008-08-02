#include <stdio.h>

#if defined(__PCC__)
#define __constructor _Pragma("init")
#define __destructor _Pragma("fini")
#elif defined(__GNUC__)
#define __constructor __attribute ((constructor))
#define __destructor __attribute ((destructor))
#else
#error which compiler?
#endif

void __constructor
constructor(void)
{
	printf("constructor called\n");
}

void __destructor
destructor(void)
{
	printf("destructor called\n");
}

int
main()
{
	printf("main called\n");
	return 0;
}
