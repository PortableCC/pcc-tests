/* 
 * pain for my eyes ;)  
 */

??=define AAA 1 
??=include <stdio.h>

int main(int *argc, char **argv)
??<
	int array??(10??) ;
	int a = 0,
		 b = 1,
		 c = 0;
	char ch = '??/"';

	a = 1 ??' a; // a ^= 1 
	c = 0x02 ??! 01 ; // c = 2 | 1

	printf("%d %d %d %c",a,b,c,ch );
	if (  a != 1 &&
			b != 1 &&
			c != 3 )
		return 1;


	return 0; 
??>
