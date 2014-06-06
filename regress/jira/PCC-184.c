/*
 * PCC-184
 * NetBSD/amd64: -xtemps bad assembly for int to long double conversion
 */

int main(int argc, char *argv[])
{
	int i;
	long double ld;

	/* Fails with -xtemps optimisation */
	ld = i;

	return 0;
}
