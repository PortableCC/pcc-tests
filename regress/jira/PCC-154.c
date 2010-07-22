/* 
 * PCC-154 
 * __PRETTY_FUNCTION__ not supported
 *
 */
#include <stdio.h>

int main(int argc, char ** argv)
{
	printf ("__FUNCTION__ = %s\n", __FUNCTION__);
	printf ("__PRETTY_FUNCTION__ = %s\n", __PRETTY_FUNCTION__);
	return 0;
}


