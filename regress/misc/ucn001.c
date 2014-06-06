/* this is a C style comment about \uNNNN */

// this C++ style comment says something about \UNNNNNNNN

/* a wide character constant containing a ucn */
int c0 = L'\u01d9';

/* a macro, resolving to a wide character constant containing a ucn */
#define CONST	L'\u01d9'
int c1 = CONST;

/* a string containing a ucn */
char s0[] = "s\u023eri\u019eg";

/* a macro, resolving to a string containing a ucn */
#define STRING "s\u023eri\u019eg"
char s1[] = STRING;

/* a string, with a ucn hiding inside a trigraph */
char s2[] = "s??/u023eri\u019eg";

/* an identifier which is a single ucn */
int \u00e4 = 0xaa;

/* a macro, resolving to an identifier starting with a ucn */
#define ID0	\u00e4_
int ID0 = 0xbb;

/* an identifier containing a ucn */
int f\u1ecdo0 = 0xcc;

/* a macro, resolving to an identifier containing a ucn */
#define ID1	f\u1ecdo1
int ID1 = 0xdd;

/* a macro, with a ucn in the identifier */
#define B\u00c2R	bar
void B\u00c2R(void);	// lower case hex
void B\u00C2R(void) { }	// upper case hex

int main(int argc, char *argv[])
{
	if (c0 != 0x01d9 || c1 != 0x01d9)
		return 1;

	if (sizeof(s0) != 9 || sizeof(s1) != 9 || sizeof(s2) != 9)
		return 1;

	if (\u00e4 != 0xaa || \u00e4_ != 0xbb || f\u1ecdo0 != 0xcc || f\u1ecdo1 != 0xdd)
		return 1;

	bar();

	return 0;
}
