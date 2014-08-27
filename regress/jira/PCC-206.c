/*
 * PCC-206
 * compiler error: ninval: init node not constant
 */

void foo(void) { }
void bar(void) { }
void baz(void) { }

static const struct {
	const char *a;
	void (*b)(void);
} s_FuncTable[] = {
	{ "foo", foo },
	{ "bar", bar },
	{ "baz", baz },
};

int main(int argc, char *argv[]) { return 0; }
