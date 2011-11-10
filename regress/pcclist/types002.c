/* Subject:    _Bool can be more than 1
 * From:       TAKAHASHI Tamotsu <tamo () mutt ! no-ip ! org>
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
	_Bool a=3;
	printf("%d\n", a);
	if ((a < 0) || (a > 1))
		return 1; 

	a+=2;
	printf("%d\n", a);
	if ((a < 0) || (a > 1))
		return 2; 
	
	a++;
	printf("%d\n", a);
	if ((a < 0) || (a > 1))
		return 3; 
	
	return 0;
}


