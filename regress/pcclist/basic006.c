/*
 * Date: Tue, 25 Aug 2015 21:42:26
 * From: Iain Hibbert
 * Subject: [Pcc] compiler error: internal label NNN not defined
 *
 * compile with -xinline
 * a label offset calculation was wrong
 */

static inline int foo(void)
{
	return 0;
}

void bar(void)
{
	__builtin_constant_p(0) ?  1 : foo() ; 
}

int main(int argc, char *argv[]) { return 0; }
