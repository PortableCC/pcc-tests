/*
 * PCC-214
 * Hex floating-point constants converted to wrong value
 */

int main(int argc, char *argv[])
{
	if (0x1p+16f != 6.5536e+4f)
		return 1;

	if (0x1p-4f != 6.25e-2f)
		return 1;

	return 0;
}
