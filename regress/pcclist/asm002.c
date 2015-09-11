/*
 * Date: Wed, 2 Sep 2015 17:40:29
 * From: Iain Hibbert
 * Subject: [Pcc] asm() in inline function produces junk chars
 *
 * emits junk characters in assembly output
 */

static inline void foo(void)
{
	__asm__ ("":::"memory");
}

void bar(void)
{
	int a;

	foo();
}

int main(int argc, char *argv[]) { return 0; }
