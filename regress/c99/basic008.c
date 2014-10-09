

main()
{
	int a1,b1,c1;
	long a2,b2,c2;
	long long a3,b3,c3;
	unsigned int a4,b4,c4;
	unsigned long a5,b5,c5;
	unsigned long long a6,b6,c6;
	float a7,b7,c7;
	double a8,b8,c8;
	long double a9,b9,c9;

	b1 = b2 = b3 = b4 = b5 = b6 = b7 = b8 = b9 = 28;
	c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = 2;

	a1 = b1/c1;
	a2 = b2/c2;
	a3 = b3/c3;
	a4 = b4/c4;
	a5 = b5/c5;
	a6 = b6/c6;

	if (a1 != 14 || a2 != 14 ||a3 != 14 ||a4 != 14 ||a5 != 14 ||a6 != 14) {
		printf("div error %d %ld %lld %d %ld %lld\n",a1,a2,a3,a4,a5,a6);
		return 1;
	}

	a1 = b1*c1;
	a2 = b2*c2;
	a3 = b3*c3;
	a4 = b4*c4;
	a5 = b5*c5;
	a6 = b6*c6;

	if (a1 != 56 || a2 != 56 ||a3 != 56 ||a4 != 56 ||a5 != 56 ||a6 != 56) {
		printf("mul error %d %ld %lld %d %ld %lld\n",a1,a2,a3,a4,a5,a6);
		return 1;
	}

	a7 = b7/c7;
	a8 = b8/c8;
	a9 = b9/c9;

	if (a7 != 14 || a8 != 14 ||a9 != 14) {
		printf("div error %f %f %Lf\n",a7,a8,a9);
		return 1;
	}

	a7 = b7*c7;
	a8 = b8*c8;
	a9 = b9*c9;

	if (a7 != 56 || a8 != 56 ||a9 != 56) {
		printf("mul error %f %f %Lf\n",a7,a8,a9);
		return 1;
	}
	return 0;
}
