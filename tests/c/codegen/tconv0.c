void
test()
{
	char sc = 1;
	unsigned char uc = 2;
	short ss = 3;
	unsigned short us = 4;
	int si = 5;
	unsigned int ui = 6;
	long sl = 7;
	unsigned long ul = 8;
	long long sll = 9;
	unsigned long long ull = 10;

	sc = uc;
	sc = ss;
	sc = us;
	sc = si;
	sc = ui;
	sc = sl;
	sc = ul;
	sc = sll;
	sc = ull;

	uc = sc;
	uc = ss;
	uc = us;
	uc = si;
	uc = ui;
	uc = sl;
	uc = ul;
	uc = sll;
	uc = ull;

	ss = sc;
	ss = us;
	ss = us;
	ss = si;
	ss = ui;
	ss = sl;
	ss = ul;
	ss = sll;
	ss = ull;

	us = sc;
	us = us;
	us = ss;
	us = si;
	us = ui;
	us = sl;
	us = ul;
	us = sll;
	us = ull;

	si = sc;
	si = uc;
	si = ss;
	si = us;
	si = ui;
	si = sl;
	si = ul;
	si = sll;
	si = ull;

	ui = sc;
	ui = us;
	ui = ss;
	ui = us;
	ui = si;
	ui = sl;
	ui = ul;
	ui = sll;
	ui = ull;

	sl = sc;
	sl = uc;
	sl = ss;
	sl = us;
	sl = si;
	sl = ui;
	sl = ul;
	sl = sll;
	si = ull;

	ul = sc;
	ul = us;
	ul = ss;
	ul = us;
	ul = si;
	ul = ui;
	ul = sl;
	ul = sll;
	ul = ull;

	sll = sc;
	sll = uc;
	sll = ss;
	sll = us;
	sll = si;
	sll = ui;
	sll = sl;
	sll = ul;
	sll = ull;

	ull = sc;
	ull = uc;
	ull = ss;
	ull = us;
	ull = si;
	ull = ui;
	ull = sl;
	ull = ul;
	ull = sll;
}
