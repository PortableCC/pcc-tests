/*
 * pcc-bug 
 * Subject:    packed structures
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 * While fields appear to be packed, the overall size of the structure  
 * isn't.
 *
 * TODO: 
 * size of struct: gcc says 8, pcc says 5  
 * I believe gcc...  
 */

//#include <stdio.h>

#define __packed _Pragma("packed")
//#define __packed __attribute__ ((__packed__))
//#define __packed /* nothing */

struct st {
         char c;
         int i;
} __packed t;

int
main(void)
{
	if (sizeof(struct st) != 8 )
		return 1; 

	return 0 ; 
}

