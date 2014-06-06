/*
 * PCC-195
 * OpenBSD amd64 : arch/amd64/amd64/machdep.c fails : compiler error: bad ixarg q
 */

#ifdef __amd64__
void
cpu_reset(void)
{
	__asm __volatile("divl %0,%1" : : "q" (0), "a" (0));
}
#endif

int main(int argc, char *argv[]) { return 0; }
