/*
 * Date: Mon, 28 Sep 2015 13:03:55
 * From: Iain Hibbert
 * Subject: [Pcc] struct return fails with -fPIC
 */

struct foo {
	int a;
	int b;
};

static struct foo foo(void)
{
	struct foo a;

	return a;
}

int main(int argc, char *argv[])
{
	foo();

	return 0;
}
