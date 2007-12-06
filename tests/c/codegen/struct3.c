union cmp {
	int i;
	int j;
};

test1(union cmp *t)
{
}

test(union cmp t1)
{
	test1(&t1);
}

main()
{
	union cmp t;
	test(t)
}
