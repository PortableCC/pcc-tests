struct st
{
	int v1;
	int v2;
};

struct st t3 = { 31, 32 };
static struct st t4 = { 41, 42 };

main()
{
	struct st t1 = { 11 , 12 };
	struct st t2 = { 21 , 22 };

	printf("t1: %d,%d\n", t1.v1, t1.v2);

	t1 = t2;

	printf("t1: %d,%d\n", t1.v1, t1.v2);

	t1 = t3;

	printf("t1: %d,%d\n", t1.v1, t1.v2);

	t1 = t4;

	printf("t1: %d,%d\n", t1.v1, t1.v2);
#if 0
	printf("t3: %d,%d\n", t3.v1, t3.v2);
#endif
	t3 = t2;
#if 0
	printf("t3: %d,%d\n", t3.v1, t3.v2);
	printf("t4: %d,%d\n", t4.v1, t4.v2);

	t4 = t2;

	printf("t4: %d,%d\n", t4.v1, t4.v2);
#endif
}
