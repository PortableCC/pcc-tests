#include <stdbool.h>
/* c99 new header and typedef */ 

int main(int *argc, char **argv)
{
	bool b1 ; 
	bool b2 ; 

	b1 = true ;
	b2 = false ;

	if (b1 == b2)
		return 1; 

	return 0;

}
