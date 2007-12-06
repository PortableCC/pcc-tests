test()
{
	int x = 1;
	int y = 2;

	if (x == 1)
		printf("eq const\n");
	if (x != 1)
		printf("ne const\n");
	if (x < 1)
		printf("lt const\n");
	if (x <= 1)
		printf("le const\n");
	if (x > 1)
		printf("gt const\n");
	if (x >= 1)
		printf("ge const\n");

	if (x == 0)
		printf("eq zero\n");
	if (x != 0)
		printf("ne zero\n");
	if (x < 0)
		printf("lt zero\n");
	if (x <= 0)
		printf("le zero\n");
	if (x > 0)
		printf("gt zero\n");
	if (x >= 0)
		printf("ge zero\n");

	if (x == y)
		printf("eq reg\n");
	if (x != y)
		printf("ne reg\n");
	if (x < y)
		printf("lt reg\n");
	if (x <= y)
		printf("le reg\n");
	if (x > y)
		printf("gt reg\n");
	if (x >= y)
		printf("ge reg\n");

	return 0;
}

