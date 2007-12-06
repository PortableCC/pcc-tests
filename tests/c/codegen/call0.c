int
test1(int i)
{
	return i+1;
}

unsigned long long
test2()
{
	return 6;
}

int
test(int i, int j, int (*f)(int))
{
	return i * f(j);
}

main()
{
	printf("%d\n", test(10, test2(), test1));
	return 0;
}
