/*
 * PCC-243
 * % operator gets segmentation fault
 */

#include <stdio.h>

#define BOOL_BIT unsigned int
#define BOOL_CAST(x) (x)

static struct bit2 {
	unsigned int uibf : 7;
	signed int sibf : 7;
	/*plain*/ int pibf : 7;
	BOOL_BIT bobf : 1;
} bits = { 1u, 1, 1, BOOL_CAST(1) };

int main(int argc, char *argv[])
{
	struct bit2 res;

	res.bobf = ((struct bit2){ 1u, 1, 1, BOOL_CAST(1) }.bobf) % 1;

	return 0;
}


