/*
 * PCC-203
 * offsetof not of unsigned type ?
 */

int main(int argc, char *argv[])
{
	struct s { int i; };

	if (__builtin_offsetof(struct s, i) < -1)
		return 0;

	return 1;
}
