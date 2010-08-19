/*correct - this must be defined */
#include <stdio.h>
int main()
{	
	printf("%s",__DATE__); 
	printf("%s",__FILE__); 
	printf("%s",__LINE__); 
	printf("%d",__STDC__); 
	if (__STDC__ != 1) 
		return 1;

	printf("%d",__STDC_HOSTED__); 
	printf("%d",__STDC_MB_MIGHT_NEQ_WC__); 
	printf("%d",__STDC_VERSION__); 	
	if (__STDC_VERSION__ != 199901L) // C99 
		return 1; 
	
	printf("%s",__TIME__); 
	printf("%d",__STDC_IEC_559__); 
	printf("%d",__STDC_IEC_559_COMPLEX__); 
	printf("%d",__STDC_ISO_10646__); 
	
	return 0; 
}
