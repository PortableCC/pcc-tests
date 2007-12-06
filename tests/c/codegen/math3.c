
typedef unsigned long long uint64_t;

static
uint64_t
_OSSwapInt64(uint64_t data)
{
    return ((uint64_t)((((uint64_t)(data) & 0xff00000000000000ULL) >> 56) |       (((uint64_t)(data) & 0x00ff000000000000ULL) >> 40) |                 (((uint64_t)(data) & 0x0000ff0000000000ULL) >> 24) |                 (((uint64_t)(data) & 0x000000ff00000000ULL) >>  8) |                 (((uint64_t)(data) & 0x00000000ff000000ULL) <<  8) |                 (((uint64_t)(data) & 0x0000000000ff0000ULL) << 24) |                 (((uint64_t)(data) & 0x000000000000ff00ULL) << 40) |   (((uint64_t)(data) & 0x00000000000000ffULL) << 56)));
}

static void
inmediate(uint64_t data)
{
	printf("%llx\n", ((uint64_t)(data) & 0xff00000000000000ULL) >> 56);
	printf("%llx\n", ((uint64_t)(data) & 0x00ff000000000000ULL) >> 40);
	printf("%llx\n", ((uint64_t)(data) & 0x0000ff0000000000ULL) >> 24);
	printf("%llx\n", ((uint64_t)(data) & 0x000000ff00000000ULL) >>  8);
	printf("%llx\n", ((uint64_t)(data) & 0x00000000ff000000ULL) <<  8);
	printf("%llx\n", ((uint64_t)(data) & 0x0000000000ff0000ULL) << 24);
	printf("%llx\n", ((uint64_t)(data) & 0x000000000000ff00ULL) << 40);
	printf("%llx\n", ((uint64_t)(data) & 0x00000000000000ffULL) << 56);
}

void
main(int argc, char *argv[])
{
	uint64_t n = 0x1234567890abcdef;
	puts(argv[0]);
	printf("0: %d, %s\n", 0, argv[0]);
	printf("1: %d \n", 1);
	printf("2: %d  \n", 2);
	printf("3: %d   \n", 3);
	printf("4: %d    \n", 4);
	printf("5: %d     \n", 5);
	putchar(' ');
	printf(" 0x%llx -> 0x%llx\n", n, _OSSwapInt64(n));
	inmediate(n);
}
