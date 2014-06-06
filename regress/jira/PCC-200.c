/*
 * PCC-200
 * amd64: unsupported xasm constraint rax
 */

#define CR4_TSD 0x00000004

void
pctrattach(void)
{
#ifdef __amd64__
	__asm __volatile("movq %%cr4,%%rax\n"
			 "\tandq %0,%%rax\n"
			 "\tmovq %%rax,%%cr4"
			 :: "i" (~CR4_TSD) : "rax");
#endif
}

int main(int argc, char *argv[]) { return 0; }
