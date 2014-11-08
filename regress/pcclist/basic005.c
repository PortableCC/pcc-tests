/*
 * Implicit conversions give wrong result.
 */
main()
{
	double   d = 99.1;
	long double   l = 99.1;
	unsigned long long u = d, u2 = l;
	long long lu = -d, lu2 = -l;

	if (u != 99 || u2 != 99 || lu != -99 || lu2 != -99)
		return 1;
//	printf(" d = %f, l = %Lf, u = %llu, u2 = %llu, lu = %lld, lu2 = %lld\n",
//	    d, l, u, u2, lu, lu2);

	d = 99.1 + (1LL << 37);
	l = 99.1 + (1LL << 37);
	u = d;
	u2 = l;
	lu = -d;
	lu2 = -l;

#define N ((1LL << 37) + 99)
	if (u != N || u2 != N || lu != -N || lu2 != -N)
		return 1;
//	printf("2: d = %f, l = %Lf, u = %llu, u2 = %llu\n", d, l, u, u2);
//	printf("2: lu = %lld, lu2 = %lld\n", lu, lu2);


	return 0;
}
