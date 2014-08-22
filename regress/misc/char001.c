/*
 * char001.c
 *
 * test conversion of character constants
 */

#include <stdio.h>

struct {
	int	con;
	int	sv;
	int	uv;
} v[] = {
	{ ' ', 32, 32 },
	{ '\007', 7, 7 },
	{ '\211', -119, 137 },
	{ '\x81', -127, 129 },
	{ L'ⱦ', 0x2c66, 0x2c66 },	/* utf-8 */
	{ L'\211', 137, 137 },		/* invalid utf-8 prefix */
	{ L'\306', 198, 198 },		/* valid utf-8 prefix */
	{ L'\u01d9', 0x01d9, 0x01d9 },	/* ucn */
};

#ifdef __CHAR_UNSIGNED__
#define val	uv
#else
#define	val	sv
#endif

int main(int ac, char *av[])
{
	int i;

	for (i = 0; i < (sizeof(v) / sizeof(v[0])); i++)
		if (v[i].con != v[i].val) {
			printf("%d = 0x%x (0x%x)\n", i, v[i].con, v[i].val);
			return 1;
		}

	return 0;
}

