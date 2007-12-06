int
test1(int b)
{
	int z = b + 3;
	int y = z - 3;
	int x = y / 3;
	int w = x * 3;
	int v = w % 3;
	int u = v ^ 3;
	int t = u | 3;
	int s = t & 3;

	return s;
}

int
test2(int b)
{
	unsigned int z = b + 3;
	unsigned int y = z - 3;
	unsigned int x = y / 3;
	unsigned int w = x * 3;
	unsigned int v = w % 3;
	unsigned int u = v ^ 3;
	unsigned int t = u | 3;
	unsigned int s = t & 3;

	return s;
}

int
main(int argc, char **argv)
{
	test1(1);
	test2(1);
}
