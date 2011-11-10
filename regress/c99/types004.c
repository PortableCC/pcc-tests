#include <limits.h>
/* C99 5.1.2.3 - integer promotions */

int main(int argc, char *argv[])
{
	signed char c1 = ' ', 
		  c2 = '!',
		  c3;

	c3 = c1 + c2 ;

	if (c3 != 'A')
		return 1; 

	c1 = SCHAR_MAX ;
	c2 = 'Z' ;

	c3 = c1 + (c2 * 2); 

	if (c3 != '3')
		return 2; 

	return 0;
}
