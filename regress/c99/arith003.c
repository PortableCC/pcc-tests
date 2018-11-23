
/*
 * Tests of basic builtin compiler arithmetic.
 */

#define	X(t,num, num2) {	\
	t d = -(-(-(-num)));	\
	if (d != num)		\
		exit(1);	\
	d = -(-(-num2));	\
	if (d != -num2)		\
		exit(1);	\
}

#define	Y(x,y,z) {				\
	if (x##nan == y##nan) exit(1+z);	\
	if (x##inf != y##inf) exit(2+z);	\
	if (x##zero != y##zero) exit(3+z);	\
	if (x##nan > y##min) exit(4+z);		\
	if (x##nan == y##min) exit(5+z);	\
	if (x##nan < y##min) exit(6+z); 	\
	if (x##inf < y##max) exit(7+z);		\
	if (x##inf == y##max) exit(8+z);	\
	if (x##inf < y##min) exit(9+z); 	\
}


/* ifdef IEEE */
long double ldmin = 3.3621031431120935063E-4932L;
long double ldmax = 1.1897314953572317650E+4932L;
long double ldinf = __builtin_infl();
long double ldnan = __builtin_nanl("");
long double ldzero = 0.0L;
double dpmin = 0x1.0p-1022;
double dpmax = 0x1.fffffffffffffp+1023;
double dmin = 2.2250738585072014E-308;
double dmax = 1.7976931348623157E+308;
double dinf = __builtin_inf();
double dnan = __builtin_nan("");
double dzero = 0.0;
float fpmax = 0x1.fffffep+127F;
float fpmin = 0x1.0p-126F;
float fmax = 3.40282347E+38F;
float fmin = 1.17549435E-38F;
float finf = __builtin_inff();
float fnan = __builtin_nanf("");
float fzero = 0.0f;
/* endif IEEE */

#define	Z(cmp, e1, e2, e3, e4, e5)				\
	if ((1.0000000 cmp 1.0000000) == !e1) exit(1);		\
	if ((1.0000000 cmp 1.0000001) == !e2) exit(1);		\
	if ((1.0000002 cmp 1.0000001) == !e3) exit(1);		\
	if ((1.0000002 cmp -1.0000001) == !e4) exit(1);		\
	if ((-1.0000002 cmp -1.0000001) == !e5) exit(1);	\

long double one = 1.0, mone = -1.0,
	max = 9223372036854775807LL, mmax = -9223372036854775807LL;

long double max2 = 9223372036854775807.0;
long double max3 = -9223372036854775807.0;

long double maxu = 18446744073709551615ULL;

#if 0
#define	PRINT(z)	printf z
#else
#define	PRINT(z)	exit(1)
#endif


int main(int argc, char *argv[])
{
	/* test negate */
	X(float, 0.0, 1.0);
	X(double, 0.0, 1.0);
	X(long double, 0.0, 1.0);

	/* fp comparision */
	Y(ld,ld,10)
	Y(ld,d,20)
	Y(ld,f,30)
	Y(d,ld,40)
	Y(d,d,50)
	Y(d,f,60)
	Y(f,ld,70)
	Y(f,d,80)
	Y(f,f,90)

	if ((ldnan > ldmin) || (ldnan < ldmin)) exit(166);

	/* test soft_cmp */
	Z(>,0,0,1,1,0)
	Z(<,0,1,0,0,1)
	Z(==,1,0,0,0,0)
	Z(!=,0,1,1,1,1)
	Z(>=,1,0,1,1,0)
	Z(<=,1,1,0,0,1)

	/* test soft_int2fp */
	if (max != max2)
		PRINT(("fail0 %llx %llx\n", *(long long*)&max,
		    *(long long*)&max2));
	if (mmax != max3)
		PRINT(("fail00 %llx %llx\n", *(long long*)&mmax,
		    *(long long*)&max3));
	if (one != 1 || max != 9223372036854775807LL)
		PRINT(("fail1 %llx\n", *(long long*)&max));
	if (mone != -1 || mmax != -9223372036854775807LL)
		PRINT(("fail2\n"));

	/* test soft_fp2int */
	if (maxu != 18446744073709551615ULL)
		PRINT(("soft_fp2int1\n"));
	if ((unsigned long long)maxu != 18446744073709551615ULL)
		PRINT(("soft_fp2int2\n"));
	return 0;
}

double dd1 = 2.0+1.0;
double dd2 = 2.0e10+1.0e8;
double dd3 = 2.0e10+1.0e-8;
double dd4 = 2.0e-10+1.0e-8;
double dd5 = 2.0e-10+1.0e-19;
double dd6 = 2.0e-10+1.0e-309;
double dd7 = 2.0e-10+1.0;
double dd8 = 2.0+1.0;
double dd9 = 2.0+4.0;
double dd10 = 2.0+3.14159;
double dd11 = 2.0+3.1415926535;
double dd12 = 2.7182818+3.1415926535;

double md1 = 2.0-1.0;
double md2 = 2.0e10-1.0e8;
double md3 = 2.0e10-1.0e-8;
double md4 = 2.0e-10-1.0e-8;
double md5 = 2.0e-10-1.0e-19;
double md6 = 2.0e-10-1.0e-309;
double md7 = 2.0e-10-1.0;
double md8 = 2.0-1.0;
double md9 = 2.0-4.0;
double md10 = 2.0-3.14159;
double md11 = 2.0-3.1415926535;
double md12 = 2.7182818-3.1415926535;

double xd1 = 2.0*1.0;
double xd2 = 2.0e10*1.0e8;
double xd3 = 2.0e10*1.0e-8;
double xd4 = 2.0e-10*1.0e-8;
double xd5 = 2.0e-10*1.0e-19;
double xd6 = 2.0e-10*1.0e-309;
double xd7 = 2.0e-10*1.0;
double xd8 = 2.0*1.0;
double xd9 = 2.0*4.0;
double xd10 = 2.0*3.14159;
double xd11 = 2.0*3.1415926535;
double xd12 = 2.7182818*3.1415926535;

double yd1 = 2.0/1.0;
double yd2 = 2.0e10/1.0e8;
double yd3 = 2.0e10/1.0e-8;
double yd4 = 2.0e-10/1.0e-8;
double yd5 = 2.0e-10/1.0e-19;
double yd6 = 2.0e-10/1.0e-309;
double yd7 = 2.0e-10/1.0;
double yd8 = 2.0/1.0;
double yd9 = 2.0/4.0;
double yd10 = 2.0/3.14159;
double yd11 = 2.0/3.1415926535;
double yd12 = 2.7182818/3.1415926535;
