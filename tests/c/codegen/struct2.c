struct str {
	int i;
};

struct str
init(int i)
{
	struct str s;
	s.i = i;
	return s;
}

main()
{
	struct str r;

	r = init(10);
}
