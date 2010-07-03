/*correct - from pcc-list */
#include <stdio.h>

int main(){
	int n=5;
	int p1[n]; /* works on pcc and gcc */
	int (*p2 )[]; /* works if you dont specify index*/
	int (*p2e)[n]; /* doesn't work on pcc */
	int (*p3)[][n]; /* also doesn't work on pcc */

	return 0;
}

