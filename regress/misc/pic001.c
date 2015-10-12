
int printf();

static int st;
int et;

static void
pfun (int a)
{
	st += a;
	et += a;
}

void
pfun2 (int a)
{
	st += a;
	et += a;
}

static void
pfun3 (int a)
{
	st += a;
	et += a;
}

void
pfun4 (int a)
{
	st += a;
	et += a;
}

int
main(int argc, char *argv)
{
	void (*sf)();
	void (*ef)();

	sf = pfun3;
	ef = pfun4;

        pfun(3);
        pfun2(4);
	sf(5);
	ef(6);
        exit(st-18+et-18);
}

