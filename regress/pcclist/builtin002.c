/*
 * test for __builtin_object_size()
 *
 * exits with the number of failures, and also prints the failed code
 *
 * NB should compile this with and without optimization turned on
 */

#include <stdio.h>

int rv;			/* exit count */

struct {
	char a[10];
	int b;
	short c[7];
} var;			/* structure with sub objects */

char *ptr;		/* indirect pointer */

int count;		/* simple variable used for side effect */

int *foo(void)		/* function with side effect */
{
	count++;
	return &count;
}

/*
 * test and report failures
 */
#define TEST(PTR, TYPE, SIZE) do {								\
	if (__builtin_object_size(PTR, TYPE) != SIZE) {						\
		printf("in line %d: __builtin_object_size(%s, %d) = %d (expected %d)\n",	\
		    __LINE__, #PTR, TYPE, __builtin_object_size(PTR, TYPE), SIZE);		\
		rv++;										\
	} } while (0)

/*
 * provide alternative values depending on optimization level
 */
#ifdef __OPTIMIZE__
#define ALT(O0, O1)	O1
#else
#define ALT(O0, O1)	O0
#endif

int main(int argc, char *argv[])
{

	/***********************************************************************
	 *
	 * when TYPE == 0, provide the maximum bytes that are available counting
	 * to the end of the whole variable, if all possible objects are known
	 * at compile time.
	 *
	 * Otherwise, the value is -1
	 */
#ifdef notyet
	TEST(&count, 0, sizeof(count));
	TEST(&var, 0, sizeof(var));
	TEST(&var.a, 0, sizeof(var));
	TEST(&var.a[1], 0, sizeof(var) - 1);
	TEST(&var.b, 0, (char *)(&var + 1) - (char *)&var.b);
#endif

	/*
	 * indirect only works when optimization is turned on
	 */
	ptr = &var.a[1];
	TEST(ptr, 0, ALT(-1, sizeof(var) - 1));

	ptr = (char *)&var.b;
	TEST(ptr, 0, ALT(-1, (char *)(&var + 1) - (char *)&var.b));

	ptr = (argc == 1) ? (char *)&var.a[1] : (char *)&count;
	TEST(ptr, 0, ALT(-1, sizeof(var) - 1));


	/***********************************************************************
	 *
	 * when TYPE == 1, provide the maximum bytes that are available counting
	 * to the end of the closest sub object, if all possible objects are known
	 * at compile time.
	 *
	 * Otherwise, the value is -1
	 */
#ifdef notyet
	TEST(&count, 1, sizeof(count));
	TEST(&var, 1, sizeof(var));
	TEST(&var.a, 1, sizeof(var.a));
	TEST(&var.a[1], 1, sizeof(var.a) - 1);
	TEST(&var.b, 1, sizeof(var.b));
#endif

	/*
	 * indirect only works when optimization is turned on
	 */
	ptr = &var.a[1];
	TEST(ptr, 1, ALT(-1, sizeof(var.a) - 1));

	ptr = (char *)&var.b;
	TEST(ptr, 1, ALT(-1, sizeof(var.b)));

	ptr = (argc == 1) ? (char *)&var : (char *)&count;
	TEST(ptr, 1, ALT(-1, sizeof(var)));


	/***********************************************************************
	 *
	 * when TYPE == 2, provide the minimum bytes available counting to the
	 * end of the whole variable, if all possible objects are known at compile
	 * time and if optimization is enabled
	 *
	 * Otherwise, the value is 0
	 */
	ptr = (argc == 1) ? (char *)&var : (char *)&count;
	TEST(ptr, 2, ALT(0, sizeof(count)));


	/***********************************************************************
	 *
	 * when TYPE == 3, provide the minimum bytes available counting to the
	 * end of the closest sub object, if all possible objects are known at
	 * compile time and if optimization is enabled
	 *
	 * Otherwise, the value is 0
	 */
	ptr = (argc == 1) ? (char *)&var : (char *)&count;
	TEST(ptr, 3, ALT(0, sizeof(count)));

	ptr = (argc == 1) ? (char *)&var.a : (char *)&var.c;
	TEST(ptr, 3, ALT(0, sizeof(var.a)));

	ptr = (argc == 1) ? (char *)&var.a[1] : (char *)&var.c;
	TEST(ptr, 3, ALT(0, sizeof(var.a) - 1));


	/***********************************************************************
	 *
	 * arguments are never evaluated, so no side effects occur
	 */
	count = 0;
	TEST(foo(), 0, -1);
	TEST(foo(), 1, -1);
	TEST(foo(), 2, 0);
	TEST(foo(), 3, 0);

	if (count != 0) {
		printf("count increased by %d\n", count);
		rv++;
	}

	ptr = &var.a[1];
	TEST(ptr++, 0, -1);
	TEST(ptr++, 1, -1);
	TEST(ptr++, 2, 0);
	TEST(ptr++, 3, 0);

	if (ptr != &var.a[1]) {
		printf("ptr increased by %d\n", ptr - &var.a[1]);
		rv++;
	}

	if (rv)
		printf("%d errors\n", rv);

	return rv;
}
