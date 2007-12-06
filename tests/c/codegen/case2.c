#define CASE(x)		case x: printf("switch: %d\n", x); break

main()
{
	unsigned int c;
	for (c = 0; c < (unsigned)(-1); c++) {

	switch (c) {
	CASE(2);
	CASE(4);
	CASE(8);
	CASE(32);
	CASE(64);
	CASE(128);
	CASE(512);
	CASE(1024);
	CASE(2048);
	CASE(8192);
	CASE(16384);
	CASE(32768);
	}
	}

	return 0;
}
