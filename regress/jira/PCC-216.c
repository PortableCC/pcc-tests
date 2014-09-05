/*
 * PCC-216
 * Compound assignment of long doubles done wrong
 */

int main(int argc, char *argv[])
{
    	long double x[6];
	int i = 0;

	x[i+2] = x[i+1] = x[i] = 2.L / 3.L; 

	if (x[0] != 2.L / 3.L)
		return 1;

	if (x[1] != 2.L / 3.L)
		return 1;

	if (x[2] != 2.L / 3.L)
		return 1;

	return 0;
}
