/* 
 * Subject:    constructors and destructors
 * From:       Gregory McGarry <greg () bitlynx ! com>
 */
#include <stdio.h>

#define __constructor __attribute ((constructor))
#define __destructor __attribute ((destructor))

int i = 0 ;

void __constructor
constructor(void)
{
	i++; 
}

void __destructor
destructor(void)
{
	i++ ; 
	if (i != 2)
		exit(2); 
}

int main(int argc, char *argv[])
{
	if (i != 1)
		return 1; 

	return 0;
}
