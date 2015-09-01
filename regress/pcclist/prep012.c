/*
 * Date: Wed, 26 Aug 2015 20:07:35
 * From: Iain Hibbert
 * Subject: [Pcc] CPP update bug
 *
 * string in _VA_ARGS_ did not work correctly
 */

#define FOO(args...)	do { foo(args); } while (0)

#define BAR(x)	FOO("x"); FOO(")");

void
foo(char *a)
{
	BAR();
}

int main(int argc, char *argv[]) { return 0; }
