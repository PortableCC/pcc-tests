/*
 * PCC-218
 * isless() macro unuseable w/ gcc <math.h> header
 * .. actually, just that some floating point builtins are missing
 */

void test(float x, float y)
{
	__builtin_isgreater(x, y);
	__builtin_isgreaterequal(x, y);
	__builtin_isless(x, y);
	__builtin_islessequal(x, y);
	__builtin_islessgreater(x, y);
	__builtin_isunordered(x, y);
}

int main(int argc, char *argv[]) { return 0; }
