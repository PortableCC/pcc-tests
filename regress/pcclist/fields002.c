/* 
 * Subject:    i386: bitfield assignments
 * From:       Stefan Kempf <stefan () nefkom ! net>
 *
 * Outputs ffffffff while it should be ffff00ff
 */

#include <stdio.h>

struct bf {
	signed int a : 8;
	signed char b : 8;
};

int
main(int argc, char **argv)
{
	int *p;
	struct bf bf;

	p = (int *)&bf;
	*p = -1;
	bf.a = -1;
	bf.b = 0;
	//printf("%.8x\n", *p);
	if (*p != 0xffff00ff)
		return 1; 


	return 0;
}

