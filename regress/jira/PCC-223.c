/*
 * PCC-223
 * Runtime core dump
 */

#define BOOL_CAST(x) ((_Bool)(x))

static struct bit2 {
	unsigned int uibf : 7;
	signed int sibf : 7;
	/*plain*/ int pibf : 7;
	_Bool bobf : 1;
} bits = { 1u, 1, 1, BOOL_CAST(1) };

static long long slli = 1LL;

int main(int argc, char *argv[])
{
	long long res;

	res = slli / bits.bobf;

	return 0;
}
