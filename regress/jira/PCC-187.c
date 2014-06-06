/*
 * PCC-187
 * NetBSD/amd64: float/double negative zero problem
 */

int main(int argc, char *argv[])
{
	float f1, f2;
	double d1, d2;
	long double ld1, ld2;

	f1 = 0.0; f2 = -f1;
	if (f1 != 0.0 || f2 != -0.0)
		return 1;

	d1 = 0.0; d2 = -d1;
	if (d1 != 0.0 || d2 != -0.0)
		return 1;

	ld1 = 0.0; ld2 = -ld1;
	if (ld1 != 0.0 || ld2 != -0.0)
		return 1;

	return 0;
}
