/*
 * pcc-bug
 * Subject:    packed structures
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 * While fields appear to be packed, the overall size of the structure
 * isn't.
 *
 * TODO:
 * handle different alignment requirements
 */

#if defined(__PCC__)
#define	__packed	_Pragma("packed")
#elif defined(__GNUC__)
#define	__packed	__attribute__ ((__packed__))
#else
#define	__packed	/* nothing */
#endif

struct st0 {
	char c;
	int i;
};

struct st1 {
	char c;
	int i;
} __packed;

int
main(void)
{
	if (sizeof(struct st0) != sizeof(int) + sizeof(int))
		return 1;

	if (sizeof(struct st1) != sizeof(int) + sizeof(char))
		return 1;

	return 0;
}

