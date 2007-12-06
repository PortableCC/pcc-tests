void
memchar()
{
	char x, *p;

	&x, &p;
	x = *p++;
	x = *++p;
	x = *p--;
	x = *--p;
}

void
memint()
{
	int x, *p;

	&x, &p;
	x = *p++;
	x = *++p;
	x = *p--;
	x = *--p;
}
