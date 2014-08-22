/*
 * str001.c
 *
 * test handling of string literals, with embedded escape sequences and utf-8
 */

char s0[] = "string";	/* plain string */
char _s0[7] = { 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x00 };

char s1[] = "foo\0" "bar\0" "baz";	/* multi-part string */
char _s1[12] = { 0x66, 0x6f, 0x6f, 0x00, 0x62, 0x61, 0x72, 0x00, 0x62, 0x61, 0x7a, 0x00 };

int w0[] = L"wide-string";	/* wide-string */
int _w0[12] = { 0x77, 0x69, 0x64, 0x65, 0x2d, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x00 };

int w1[] = L"wide\0" "-\0" L"string";	/* multi-part wide-string */
int _w1[14] = { 0x77, 0x69, 0x64, 0x65, 0x00, 0x2d, 0x00, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x00 };

char u0[] = "sⱦriƞg";	/* utf-8 string */
char _u0[10] = { 0x73, 0xe2, 0xb1, 0xa6, 0x72, 0x69, 0xc6, 0x9e, 0x67, 0x00 };

int u1[] = L"sⱦriƞg";	/* utf-8 wide-string */
int _u1[7] = { 0x73, 0x2c66, 0x72, 0x69, 0x19e, 0x67, 0x00 };


#define check(s)	do {					\
	int i;							\
								\
	if (sizeof(s) != sizeof(_##s))				\
		return 1;					\
								\
	for (i = 0; i < (sizeof(_##s)/sizeof(_##s[0])); i++)	\
		if (s[i] != _##s[i])				\
			return 1;				\
} while (0)

int
main(int argc, char *argv[])
{
	check(s0);
	check(s1);
	check(w0);
	check(w1);
	check(u0);
	check(u1);

	return 0;
}
