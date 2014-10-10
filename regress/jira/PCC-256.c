/*
 * PCC-256
 * using inline function with K&R declaration and -O causing incorrect assembler
 */

int foo(unsigned char a)
{
	return 0;
}

static inline int bar(a)
unsigned char a;
{
	return foo(a);
}

void baz(void)
{
	bar(0);
}

int main(int argc, char *argv[]) { return 0; }
