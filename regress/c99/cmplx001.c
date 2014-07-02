#include <float.h>
#include <complex.h>
#include <stdio.h>

void prt(_Complex float fc1, _Complex float fc2, _Complex float fc3);

int main(void){
	float complex fc1, fc2, fc3;
	float f1, f2, f3, f4;
	double complex dc1, dc2, dc3;
	double d1, d2, d3, d4;
	long double complex lc1, lc2, lc3;
	long double l1, l2, l3, l4;

	fc1 = 0.0+0.0*I;
	fc2 = 0.0+0.0*I;
	fc3 = fc1 / fc2;
	printf("float: 0.0+0.0*I/0.0+0.0*I = %g,%g (expect -nan,-nan)\n",
	    crealf(fc3), cimagf(fc3));
	
	dc1 = 0.0+0.0*I;
	dc2 = 0.0+0.0*I;
	dc3 = dc1 / dc2;
	printf("double: 0.0+0.0*I/0.0+0.0*I = %g,%g (expect -nan,-nan)\n",
	    creal(dc3), cimag(dc3));
	
	lc1 = 0.0+0.0*I;
	lc2 = 0.0+0.0*I;
	lc3 = lc1 / lc2;

	printf("long double: 0.0+0.0*I/0.0+0.0*I = %Lg,%Lg (expect -nan,-nan)\n",
	    creall(lc3), cimagl(lc3));
	

	fc1 = 0.f + FLT_EPSILON * I;
	fc2 = fc1;
	fc3 = fc1 / fc2;
	printf("float: 0.0+EPS*I/0.0+EPS*I = %g,%g (expect 1,0)\n",
	    crealf(fc3), cimagf(fc3));

	dc1 = 0.f + DBL_EPSILON * I;
	dc2 = dc1;
	dc3 = dc1 / dc2;
	printf("double: 0.0+EPS*I/0.0+EPS*I = %g,%g (expect 1,0)\n",
	    creal(dc3), cimag(dc3));

	lc1 = 0.f + LDBL_EPSILON * I;
	lc2 = lc1;
	lc3 = lc1 / lc2;
	printf("long double: 0.0+EPS*I/0.0+EPS*I = %Lg,%Lg (expect 1,0)\n",
	    creall(lc3), cimagl(lc3));

	fc1 = 0.f + 0.f * I;
	fc2 = 0.f + I*FLT_MIN;
	fc3 = fc1 / fc2;
	printf("float: 0.0+0*I/0.0+FLT_MIN*I = %g,%g (expect 0,0)\n",
	    crealf(fc3), cimagf(fc3));

	dc1 = 0.0 + 0.0 * I;
	dc2 = 0.0 + I*DBL_MIN;
	dc3 = dc1 / dc2;
	printf("double: 0.0+0*I/0.0+DBL_MIN*I = %g,%g (expect 0,0)\n",
	    creal(dc3), cimag(dc3));

	lc1 = 0.0 + 0.0 * I;
	lc2 = 0.0 + I*LDBL_MIN;
	lc3 = lc1 / lc2;
	printf("long double: 0.0+0*I/0.0+LDBL_MIN*I = %Lg,%Lg (expect 0,0)\n",
	    creall(lc3), cimagl(lc3));

}
