#pragma packed

struct tester {
	int i1;
	char c1;
	int i2;
	short s1;
	long long ll1;
};

#pragma pack()

int
main()
{
	printf("sizeof(struct tester) = %d\n", sizeof(struct tester));
	printf("1: 19\n");
	printf("2: 20\n");
	printf("3: 22\n");
	printf("4: 24\n");
	printf("5: 28\n");
	printf("6: 32\n");
	printf("7: 36\n");
	printf("8: 40\n");
	printf("9: 45\n");
	printf("10: 50\n");

	return 0;
}
