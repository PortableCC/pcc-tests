/*
 * Date: Mon, 19 Oct 2015 18:13:47
 * From: Iain Hibbert
 * Subject: [Pcc] cpp unterminated conditional inside arg list
 *
 * As noted by Rich Felker and Fred J. Tydeman, this is undefined
 * behaviour in C99 .. it falls under GCC compat
 */

void foo(int a, int b)
{
}

#define foo(a, b)	foo(a, b)

int main(int argc, char *argv[])
{

	foo(
#ifndef FOO
	3 |
#endif
	0, 0);

	return 0;
}
