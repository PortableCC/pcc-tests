/*
 * PCC-227
 * ICE with i386 machdep.c in OpenBSD
 */

#if defined(__i386__) || defined(__amd64__)
void
cpu_reset(void)
{
	__asm volatile("divl %0,%1" : : "q" (0), "a" (0));
}
#endif

int main(int argc, char *argv[])
{

	return 0;
}
