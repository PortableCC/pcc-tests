/* C99 6.5.2.3 */
#include <stdio.h>

struct aaa {
	int a1; 
	int a2; 
}; 

int main(int *argc, char **argv)
{
	struct aaa A; 

	A.a1 = 1 ;
	A.a2 = 2 ;

	if ( (&A)->a1 != A.a1 )
		return 1; 
	if ( (&A)->a2 != A.a2 )
		return 2; 

	return 0; 
}
