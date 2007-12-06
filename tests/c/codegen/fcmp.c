void
test()
{
	float f1 = 1.0;
	double d1 = 2.0;
	long double ld1 = 3.0;
	float f2 = 11.0;
	double d2 = 12.0;
	long double ld2 = 13.0;

	int i;

	if (f1 == f2) i = 1;
	if (f1 != f2) i = 1;
	if (f1 < f2) i = 1;
	if (f1 <= f2) i = 1;
	if (f1 > f2) i = 1;
	if (f1 >= f2) i = 1;

	if (d1 == d2) i = 1;
	if (d1 != d2) i = 1;
	if (d1 < d2) i = 1;
	if (d1 <= d2) i = 1;
	if (d1 > d2) i = 1;
	if (d1 >= d2) i = 1;

	if (ld1 == ld2) i = 1;
	if (ld1 != ld2) i = 1;
	if (ld1 < ld2) i = 1;
	if (ld1 <= ld2) i = 1;
	if (ld1 > ld2) i = 1;
	if (ld1 >= ld2) i = 1;
}

