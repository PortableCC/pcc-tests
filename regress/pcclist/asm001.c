/*
 * Date: Tue, 1 Sep 2015 11:34:52
 * From: Iain Hibbert
 * Subject: [Pcc] extraneous characters in asm output
 *
 * fails to compile
 */

void foo(void)
{
#ifdef __i386__
	asm("lcall $0x7fff,$0x0");
#endif
}

int main(int argc, char *argv[]) { return 0; }
