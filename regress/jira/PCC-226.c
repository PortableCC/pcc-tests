/*
 * PCC-226
 * d = v++; done wrong; macro expansion has Ctrl-D and Ctrl-E characters
 */

/*
 * Two problems:
 * ld_aut is not 2
 * ld_aut in error message has Ctrl-D before it and Ctrl-E after it.
 */

#include <stdio.h> /* puts(), printf() */

static unsigned long int NumFail = 0uL;
static unsigned long int NumPass = 0uL;
static int ckFailed = 0;

#define ck(a)										\
	if (a) {									\
		NumPass++;								\
		ckFailed = 0;								\
	} else {									\
		NumFail++;								\
		ckFailed = 1;								\
		(void)printf("\nError in line %d in %s\n", __LINE__, __FILE__ );	\
		(void)puts( #a );							\
	}

int main(int argc, char *argv[])
{
	long double ld_aut;
	double d;

#define tst_uni(v)	\
	v = 0;		\
	v++;		\
	ck(1 == v);	\
	d = v++;	\
	ck(2 == v);	\
	ck(1. == d)

	tst_uni( ld_aut );

	return (NumFail > 0);
}
