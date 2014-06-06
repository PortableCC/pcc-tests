/*
 * PCC-194
 * i386: xtemps optimisation runtime failure
 */

#include <assert.h>
#include <float.h>
#include <stdlib.h>

#define FABS(x) ((x) < 0.0 ? -(x) : (x))

int main(int argc, char *argv[])
{
	double d = strtod(".5", NULL);
	assert(FABS(d - .5) < DBL_EPSILON);
	return 0;
}
