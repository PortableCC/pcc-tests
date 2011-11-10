/* pcc-bug
 * Subject:    PIC and optimisations on i386
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 * $ pcc -fpic -O -S basic002.c
 * lp.c, line 3: compiler error: prtprolog pic error
 *
 */
#include <stdio.h>
void func(void)
{
	         for (;;) { }
}

int main(int argc, char *argv[]) { return 0; }
