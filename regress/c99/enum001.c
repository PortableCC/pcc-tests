typedef int a;
typedef int b;

int main(int argc, char *argv[])
{
	enum a { a = 1, b = a + 2, c = a + b + 3 };

	return 0;
}
