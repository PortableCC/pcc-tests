/*
 * Date: Tue, 29 Sep 2015 21:02:57
 * From: Iain Hibbert
 * Subject: [Pcc] #if emits token for macro comparison
 *
 * [ragge] The expression code always assumed that replacement of
 *         a macro succeeded.
 */

#define foo(x)	_foo(x)

#if foo == _foo
int rv = 0;
#else
int rv = 1;
#endif

int main(int argc, char *argv[])
{
	return rv;
}
