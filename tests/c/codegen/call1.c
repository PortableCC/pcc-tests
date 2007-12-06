int
add(int i, int j)
{
	return i*j;
}

int
main(void)
{
	return add(add(1,2),add(3,add(4,5)));
}
