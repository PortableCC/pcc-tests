/*correct - from C99*/
#include <stdio.h>

int main(int *argc, char **argv)
{
	void *A = NULL ; 

	if ( &*A != NULL )
		return 1; 

	return 0; 
}
