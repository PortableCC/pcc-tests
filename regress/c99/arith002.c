/* IEEE-754 floating-point arithmetic */

#include <stdio.h>
#include <math.h>

int main(int *argc,char **argv)
{
	double f1 = 1/0.0, 
			f2 = -1/0.0, 
			f3 = 0.0/0.0, 
			f4 = sqrt(-1.0),
			f5 = INFINITY/INFINITY ;

	//printf("f1:%f\n",f1);
	if ( f1 != INFINITY )
		return 1; 

	//printf("f2:%f\n",f2);
	if ( f2 != -INFINITY )
		return 2; 

	//printf("f3:%f\n",f3);
	if ( ! isnan(f3) )
		return 3; 
	
	//printf("f4:%f\n",f4);
	if ( ! isnan(f4) )
		return 4; 
	
	//printf("f5:%f\n",f5);
	if ( ! isnan(f5) )
		return 5; 

	return 0;
}
