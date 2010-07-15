/*correct */
#include <stdio.h>
int main()
{	
	int a ;

	a++ ;
#line 2147483000 
/* max 2147483647 */
	if ( __LINE__ < 50) 
		return 1;

	return 0; 
}
