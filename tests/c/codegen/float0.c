float f1 = 1.0;
double d1 = 2.0;
long double ld1 = 3.0;

void
test()
{
	float f2 = 11.0;
	double d2 = 12.0;
	long double ld2 = 13.0;

	f2 = f1 + f2;
	f1 = f2 + f1;
	f2 = f1 - f2;
	f1 = f2 - f1;
	f2 = f1 * f2;
	f1 = f2 * f1;
	f2 = f1 / f2;
	f1 = f2 / f1;
	f1 = -f1;
	f2 = -f2;

	d2 = d1 + d2;
	d1 = d2 + d1;
	d2 = d1 - d2;
	d1 = d2 - d1;
	d2 = d1 * d2;
	d1 = d2 * d1;
	d2 = d1 / d2;
	d1 = d2 / d1;
	d1 = -d1;
	d2 = -d2;

	ld2 = ld1 + ld2;
	ld1 = ld2 + ld1;
	ld2 = ld1 - ld2;
	ld1 = ld2 - ld1;
	ld2 = ld1 * ld2;
	ld1 = ld2 * ld1;
	ld2 = ld1 / ld2;
	ld1 = ld2 / ld1;
	ld1 = -ld1;
	ld2 = -ld2;
}
