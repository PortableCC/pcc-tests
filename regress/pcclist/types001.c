/* pcc-bug
 * Subject:    register qualifer to parameter inside a structure
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 * Fixed:  The storage class is not forced to be MOS in structs anymore,
 * so REGISTER is OK.
 *
 */

#include <stdio.h>

struct {
	void (*fun)(register int a);
} x;

int main()
{
	return 0; 
}

