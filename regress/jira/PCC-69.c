/* 
 * PCC-69 
 * cpp processes code incorrectly
 */
#include <stdint.h>

#define ELF32_NO_ADDR	((uint32_t) ~0)	/* Indicates addr. not yet filled in */
#define ELFSIZE 32
#define __CONCAT(x,y)	x ## y
#define CONCAT(x,y) __CONCAT(x,y)
#define ELFDEFNNAME(x)  CONCAT(ELF,CONCAT(ELFSIZE,CONCAT(_,x)))

int
main(int argc, char *argv[])
{
	long l = 0;

	if (l == ELFDEFNNAME(NO_ADDR)) {
		return (1);
	}
	return (0);
}


