/*
 * PCC-222
 * Runtime core dump
 */

#define BOOL_CAST(x) ((_Bool)(x))

static struct bit2 {
	unsigned int uibf : 7;
	signed int sibf : 7;
	/*plain*/ int pibf : 7;
	_Bool bobf : 1;
} bits = { 1u, 1, 1, BOOL_CAST(1) };

int main(int argc, char *argv[])
{
	_Bool res;
	res = BOOL_CAST(1) / ((struct bit2){ 1u, 1, 1, BOOL_CAST(1) }.bobf);

	return 0;
}
