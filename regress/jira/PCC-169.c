/*
 * PCC-169
 * fprintf fails badly with NetBSD/pmax (MIPS emulation under gxemul)
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	fprintf(stdout, "%s\n", "hello, world");
	return 0;
}
