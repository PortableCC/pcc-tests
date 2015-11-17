/*
 * Date: Wed, 28 Oct 2015 11:34:56
 * From: Iain Hibbert
 * Subject: [Pcc] accidentally constructing a new token (punctuator)
 */

#define EFOO	-1

int foo(int a)
{
	return -EFOO;
}

#define BAR(x)	x
int bar(void)
{
	return BAR(-EFOO);
}

int main(int argc, char *argv[]) { return 0; }
