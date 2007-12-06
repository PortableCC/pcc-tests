void
test()
{
	float f = 21.0;
	double d = 22.0;
	long double ld = 23.0;

	int si = 101;
	unsigned int ui = 102;
	long sl = 103;
	unsigned long ul = 104;
	long long sll = 105;
	unsigned long long ull = 106;
	
	f = si;
	f = ui;
	f = sl;
	f = ul;
	f = sll;
	f = ull;

	d = si;
	d = ui;
	d = sl;
	d = ul;
	d = sll;
	d = ull;

	ld = si;
	ld = ui;
	ld = sl;
	ld = ul;
	ld = sll;
	ld = ull;

	si = f;
	si = d;
	si = ld;

	ui = f;
	ui = d;
	ui = ld;

	sl = f;
	sl = d;
	sl = ld;

	ul = f;
	ul = d;
	ul = ld;

	sll = f;
	sll = d;
	sll = ld;

	ull = f;
	ull = d;
	ull = ld;
}
