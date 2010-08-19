#include <stdio.h>
#include <string.h>

#include "lib.h"

int
main()
{
	int ri;
	char *str = "This is the string" ;

	printf("before function\n");
	ri = lib_function(str);
	printf("after function (%d)\n", ri);
	if (strlen(str) != ri )
		return 1; 

	return 0;
}
