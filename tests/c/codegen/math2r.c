#include <assert.h>

void
test()
{
	int si = 0xfedcba98;
	unsigned int ui = 0xfedcba98;
	long long sll = 0xfedcba980a0a0a0aLL;
	unsigned long long ull = 0xfedcba980a0a0a0aLL;

	assert(si >> 4 == 0xffedcba9);
	assert(si << 4 == 0xedcba980);

	assert(ui >> 4 == 0x0fedcba9);
	assert(ui << 4 == 0xedcba980);

	assert(sll >> 4 == 0xffedcba980a0a0a0LL);
	assert(sll << 4 == 0xedcba980a0a0a0a0LL);

	assert(ull >> 4 == 0x0fedcba980a0a0a0LL);
	assert(ull << 4 == 0xedcba980a0a0a0a0LL);

	assert(sll >> 36 == 0xffffffffffedcba9LL);
	assert(sll << 36 == 0xa0a0a0a000000000LL);

	assert(ull >> 36 == 0x000000000fedcba9LL);
	assert(ull << 36 == 0xa0a0a0a000000000LL);
}

int
main()
{
	test();
	return 0;
}
