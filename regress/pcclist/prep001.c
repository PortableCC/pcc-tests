/* pcc-bug
 *
 * Subject:    Macro containing a variadic macro
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 */

#include <stdio.h>

#define MAC1(...)                       \
	printf(__VA_ARGS__);

#define MAC2(arg1, arg2)                \
	MAC1("%d %d\n", arg1, arg2)

int
main()
{
	MAC1("%d %d\n", 1, 2);
	MAC2(1, 2);
	return 0;
}

