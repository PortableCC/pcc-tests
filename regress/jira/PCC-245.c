/*
 * PCC-245
 * /= operator gets fault at runtime
 */

static unsigned long int uli = 1uL;
static float f = 1.f;

int main(int argc, char *argv[])
{
	unsigned long int res;
	res = uli /= f;
	return 0;
}
