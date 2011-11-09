#include <stdbool.h>
#include <iso646.h>
/* c99 new header and def */ 

int main(int argc, char *argv[])
{
	bool b1 ; 
	bool b2 ; 

	b1 = true ;
	b2 = false ;

	if (b1 and b2)
		return 1; 
	
	if (b1 or b2)
		return 0; 

	return 99;

}
