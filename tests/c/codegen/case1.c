#define CASE(x)		case x: printf("switch: %d\n", x); break

main(int argc, char *argv[0])
{
	int c;

	if (argc < 2) {
		printf("usage: %s <num>\n", argv[0]);
		return 1;
	}

	c = atoi(argv[1]);
	printf("c=%d\n", c);

	switch (c) {
	CASE(5);
	CASE(3);
	CASE(4);
	CASE(6);
	CASE(9);
	CASE(13);
	CASE(8);
	CASE(7);
	CASE(11);
	CASE(12);
	CASE(15);
	CASE(18);
	CASE(1);
	CASE(21);
	default:
		printf("default\n");
		break;
	}

	return 0;
}
