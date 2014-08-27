/*
 * PCC-204
 * integer promotion for small unsigned type constants
 */

int main(int argc, char *argv[])
{
	if ((unsigned char)0 > -1)
		return 0;

	return 1;
}
