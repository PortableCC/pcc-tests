/*
 * Date: Tue, 29 Sep 2015 21:02:57
 * From: Iain Hibbert
 * Subject: [Pcc] #if emits token for macro comparison
 *
 * [ragge] The macro name were emitted if replacement of the
 *         macro failed inside #if statements
 */

#define foo(x)	_foo(x)

#if defined(foo) && (foo == _foo)
int rv = 0;
#else
int rv = 1;
#endif

int main(int argc, char *argv[])
{
	return rv;
}
