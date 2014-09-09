/*
 * PCC-234
 * Cannot add a float and a _Bool
 */

int main(int argc, char *argv[])
{
	float res, f = 1.f;
	_Bool bol = 1;
	res = f + bol; 

	return 0;
}
