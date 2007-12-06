int
test()
{
	int a = 10;
	int b = 0;
	int i = 1;
	int j = 2;
	int r = 0;
	int p = i;
	int q = j;
	int s;

	r = i + j;
	if (r == 3)
		s = 1 * 4;
	else
		s = 4;
	s = 2;
	s += 10;
	s -= 10;
	if (0)
		s += 4;
	if (p != q)
		s -= 4;

	for (i = 0; i<(j*7); i++) {
		s += r;
		b += (p * q);
	}

	return (s + b);
}

