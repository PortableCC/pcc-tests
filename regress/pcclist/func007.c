/*
 * Date: Mon, 7 Sep 2015 21:08:15
 * From: Iain Hibbert
 * Subject: [Pcc] error: returning value from void function
 *
 * compile with -Wc,xtemps,-xinline, emits spurious warning
 */

static inline void foo(int a)
{
}

void bar(int a)
{
	return foo(a);
}

int main(int argc, char *argv[]) { return 0; }
