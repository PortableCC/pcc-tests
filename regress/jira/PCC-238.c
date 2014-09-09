/*
 * PCC-238
 * unsigned int from double done wrong
 */

int main(int argc, char *argv[])
{
	unsigned int ui;
	ui = 4294967295.;	/* 2 ** 32 - 1 */

	if (ui != 0xffffffff)
		return 1;

	return 0;
}
