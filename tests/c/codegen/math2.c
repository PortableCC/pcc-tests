typedef unsigned long long uint64_t;

int
main()
{
	uint64_t n = 0x1234567890abcdeULL;
	uint64_t p1 = n << 36;
	uint64_t p2 = n >> 36;
	printf("0x%llx 0x%llx 0x%llx\n", n, p1, p2);
	return 0;
}
