/*
 * PCC-189
 * booleans can have values other than 0/1
 */

int main(int argc, char *argv[])
{
	if ((_Bool)0.0 != 0)
		return 1;
	if ((_Bool)0.5 != 1)
		return 1;
	if ((_Bool)2.5 != 1)
		return 1;
	if ((_Bool)0 != 0)
		return 1;
	if ((_Bool)1 != 1)
		return 1;
	if ((_Bool)2 != 1)
		return 1;

	return 0;
}
