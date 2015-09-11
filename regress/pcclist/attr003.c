/*
 * Date: Thu, 10 Sep 2015 16:25:18
 * From: Nicolas Joly
 * Subject: [Pcc] ccom major internal compiler error
 *
 * failed with internal compiler error on NetBSD-7.99.20 amd64
 *
 * bug was failing to copy more than one attribute for inline functions
 */

typedef struct {
	int quot;
	int rem;
} div_t;

div_t	 div(int, int);

static inline void estimate(int x, int y)
{
	div_t d = div(x, y);
}

void sample(int num)
{
	estimate(num, 48);
}

int main(int argc, char *argv[]) { return 0; }
