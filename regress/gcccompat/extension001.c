/* pcc-list
 * Subject:    PCC does not support GCC's ?: extension.
 * From:       Jordan Earls <earlz () earlz ! biz ! tm>
 *
 * GCC has an extension to the C syntax so that `?:` is a valid
 * operator.
 * Basic expansion is like this:
 *
 * x=y?:z;
 *
 * translates into
 *
 * x=y?y:z;
 */ 
#include <stdio.h>

int main(){
	int x,y;
	x=0;
	y=10;
	x=x?:y;
	y=y?:x;

	printf("x:%d y:%d",x,y);
	if ((x == 10) && (y == 10))
		return 0;

	return 1; 
}

