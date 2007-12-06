int
test1(int b)
{
	long long z = b + 3;
	long long y = z - 3;
	long long x = y / 3;
	long long w = x * 3;
	long long v = w % 3;
	long long u = v ^ 3;
	long long t = u | 3;
	long long s = t & 3;

	return s;
}

int
test2(int b)
{
	unsigned long long z = b + 3;
	unsigned long long y = z - 3;
	unsigned long long x = y / 3;
	unsigned long long w = x * 3;
	unsigned long long v = w % 3;
	unsigned long long u = v ^ 3;
	unsigned long long t = u | 3;
	unsigned long long s = t & 3;

	return s;
}

int
main(int argc, char **argv)
{
	test1(1);
	test2(1);
}
