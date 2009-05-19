int
main()
{
	float f1 = 1.0;
	float f2 = 11.0;

	asm("# ==");
	if (f1 == f2) printf("WRONG 1\n");
	asm("# !=");
	if (f1 != f2) printf("OK 1\n");
	asm("# <");
	if (f1 < f2) printf("OK 2\n");
	asm("# <=");
	if (f1 <= f2) printf("OK 3\n");
	asm("# >");
	if (f1 > f2) printf("WRONG 2\n");
	asm("# >=");
	if (f1 >= f2) printf("WRONG 3\n");

	if (f2 == f1) printf("WRONG 4\n");
	if (f2 != f1) printf("OK 4\n");
	if (f2 < f1) printf("WRONG 5\n");
	if (f2 <= f1) printf("WRONG 6\n");
	if (f2 > f1) printf("OK 5\n");
	if (f2 >= f1) printf("OK 6\n");

	if (f1 == f1) printf("OK 7\n");
	if (f1 != f1) printf("WRONG 7\n");
	if (f1 >= f1) printf("OK 8\n");
	if (f1 <= f1) printf("OK 9\n");

	return 0;
}

