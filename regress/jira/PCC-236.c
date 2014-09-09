/*
 * PCC-236
 * Cannot convert from bool to float
 */

double hypot(double x, double y)
{
	return 0.0;
}

int main(int argc, char *argv[])
{
	_Bool b = 1;
	float f = 1.f;
	f = hypot(b, f);
	return 0;
}
