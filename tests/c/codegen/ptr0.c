char p = 'A';

main()
{
	char *t1[] = { &p, &p, &p };
	int off = 2;
	char *z = t1[off];
	putc(*z);
}
