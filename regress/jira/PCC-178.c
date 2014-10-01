/*
 * PCC-178
 * register miscounting on i386?
 */

#if defined(__i386__) || defined(__amd64__)
static inline unsigned short __ntohs (unsigned short x)
{
	__asm__ ("xchgb %b0, %h0"
	: "=q" (x) : "0" (x));
	return (x);
}

struct a {
	struct a *nxt;
};

extern struct a *new(void);

void
foo(unsigned short p)
{
	struct a *a, b;

	a = &b;
	a->nxt = new();

	p = __ntohs(p);
}
#endif

int main(int argc, char *argv[]) { return 0; }

struct a *new(void) { return 0; }
