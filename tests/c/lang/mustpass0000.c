typedef int a;
typedef int b;

void f(void)
{
	enum a { a = 1, b = a + 2, c = a + b + 3 };
}
