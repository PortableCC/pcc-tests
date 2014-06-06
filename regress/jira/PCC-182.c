/*
 * PCC-182
 * NetBSD/amd64: Incorrect register `%eax' used with `q' suffix
 */

#include <stddef.h>

int main(int argc, char *argv[])
{
	char xxx[1];
	ptrdiff_t d;

	d = xxx - (char *)0;

	return 0;
}
