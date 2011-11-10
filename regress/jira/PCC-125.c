/* 
 * PCC-125 
 * pcc signed long constants problem on NetBSD/amd64
 */
#include <assert.h> 
#include <stdio.h> 

int main(int argc, char *argv[])
{ 
	long l; 

	l = 0x7fffffffffffffffL; /* LONG_MAX */ 
	printf("%ld\n", l); 
	if(l > 0)
		return 1; 

	return 0;
}
