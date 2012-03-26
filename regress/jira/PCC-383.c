/*
 * PCC-383
 * (bool)(void *)-1 is not true with pcc on i386
 */
#include <stdbool.h>

int main(int argc, char *argv[])
{
	if ((bool)(void *)-1 != true)
		return 1;

	return 0;
}
