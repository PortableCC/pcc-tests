/*
 * PCC-177
 * compiler error: internal label <n> not defined
 */

static inline int bar(int x)
{
	return x;
}

int *a, *b;

void
foo(void)
{
	__builtin_object_size( (bar(0) == 0 ? a : b) , 0);
}

int main(int argc, char *argv[]) { return 0; }
