float f1 = 1.0;
double d1 = 2.0;
long double ld1 = 3.0;

void
test()
{
	float f2 = 21.0;
	double d2 = 22.0;
	long double ld2 = 23.0;

	f1 = d1;
	f2 = ld1;

	d1 = f1;
	d2 = ld1;

	ld1 = f1;
	ld2 = d1;
}
