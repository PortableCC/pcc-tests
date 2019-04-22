extern struct yywork { int verify, advance; } yycrank[];

main()
{
        struct yywork *yyt = yycrank-1;
	int a;

	a = (yycrank-yyt);

	yyt = yycrank+(yycrank-yyt);
	printf("yyt %d %d\n", yyt->verify, yyt->advance);
	if (yyt->verify != 3 || yyt->advance != 4)
		return 1;

	yyt = yycrank+a;
	printf("yyt %d %d\n", yyt->verify, yyt->advance);
	if (yyt->verify != 3 || yyt->advance != 4)
		return 1;
	return 0;
}

struct yywork yycrank[] = { 1,2,3,4,5,6,7,8 };
