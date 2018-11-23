/* IEEE-754 floating-point arithmetic */

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{

#ifndef __vax__
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

	float ff1 = 1/0.0, 
			ff2 = -1/0.0, 
			ff3 = 0.0/0.0, 
			ff4 = sqrt(-1.0),
			ff5 = INFINITY/INFINITY ;

	//printf("f1:%f\n",f1);
	if ( ff1 != INFINITY )
		return 1; 

	//printf("f2:%f\n",f2);
	if ( ff2 != -INFINITY )
		return 2; 

	//printf("f3:%f\n",f3);
	if ( ! isnan(ff3) )
		return 3; 
	
	//printf("f4:%f\n",f4);
	if ( ! isnan(ff4) )
		return 4; 
	
	//printf("f5:%f\n",f5);
	if ( ! isnan(ff5) )
		return 5; 

	long double l1 = 1/0.0, 
			l2 = -1/0.0, 
			l3 = 0.0/0.0, 
			l4 = sqrt(-1.0),
			l5 = INFINITY/INFINITY ;

	//printf("f1:%f\n",f1);
	if ( l1 != INFINITY )
		return 6; 

	//printf("f2:%f\n",f2);
	if ( l2 != -INFINITY )
		return 7; 

	//printf("f3:%f\n",f3);
	if ( ! isnan(l3) )
		return 8; 
	
	//printf("f4:%f\n",f4);
	if ( ! isnan(l4) )
		return 9; 
	
	//printf("f5:%f\n",f5);
	if ( ! isnan(l5) )
		return 10; 
#endif

	return 0;
}
