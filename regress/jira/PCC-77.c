/* 
 * PCC-77
 * autoconf failed to detect ANSI C headers with pcc (regression)
 */ 
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

#if ((' ' & 0x0FF) == 0x020)
# define ISLOWER(c) ('a' <= (c) && (c) <= 'z')
# define TOUPPER(c) (ISLOWER(c) ? 'A' + ((c) - 'a') : (c))
#else
# define ISLOWER(c)  (('a' <= (c) && (c) <= 'i')   || ('j' <= (c) && (c) <= 'r')  || ('s' <= (c) && (c) <= 'z'))
# define TOUPPER(c) (ISLOWER(c) ? ((c) | 0x40) : (c))
#endif

#define XOR(e, f) (((e) && !(f)) || (!(e) && (f)))

int
main()
{
    int i;
    for (i = 0; i < 256; i++)
    {
        printf("%03d: islower: %d, ISLOWER: %d, toupper: %d, TOUPPER: %d\n",
                i, islower(i), ISLOWER(i), toupper(i), TOUPPER(i));

        if (XOR (islower (i), ISLOWER (i)) || toupper (i) != TOUPPER (i))
        {

            return 2;
        }
    }

    puts("ok\n");
    return 0;
}


