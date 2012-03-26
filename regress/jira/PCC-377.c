/*
 * PCC-377
 * __builtin_offset finds a syntax error with a field named same as a typedef
 */

typedef int foo;

struct foo {
	foo foo;
	int bar;
};

int bar = __builtin_offsetof(struct foo, foo);

int main(int argc, char *argv[]) { return 0; }
