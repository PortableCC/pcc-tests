/* The following code fails with pcc/NetBSD/i386
 * Subject:    initializer regresssion
 * From:       Iain Hibbert <plunky () rya-online ! net>
 */

struct foo {
	struct foo *f;
};

struct bar {
	int i;
	struct foo f;
};

struct bar b1 = {
	1,
	{ &b1.f },	/* this is ok */
};

struct bar b2 = {
	.i = 2,
	.f = { &b2.f },	/* this is ok */
};

struct bar b3 = {
	.f = { &b3.f },	/* "illegal combination of pointer and integer" */
};

int main(int argc, char *argv[]) { return 0; }
