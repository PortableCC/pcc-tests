/*
 * PCC-185
 * NetBSD/amd64: undefined reference to `__builtin_nanf'
 */

int main(int argc, char *argv[])
{
	float f = __builtin_nanf("");
	double d = __builtin_nan("");
	long double ld = __builtin_nanl("");

	return 0;
}
