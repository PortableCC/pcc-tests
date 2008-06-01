/*
 * Currently only compiles with gcc
 */

#include <stdio.h>

#ifdef __PCC__
#define __constructor _Pragma("constructor")
#define __destructor _Pragma("destructor")
#else
#define __constructor __attribute ((constructor))
#define __destructor __attribute ((destructor))
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
