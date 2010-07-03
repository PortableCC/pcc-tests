/*correct */
#include <stdio.h>
int main()
{	
	int a ;

	a++ ;
#line 12345 
	if ( __LINE__ < 50) 
		return 1;

	return 0; 
}
