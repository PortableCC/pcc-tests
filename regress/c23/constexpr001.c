
#include <stdio.h>

constexpr int a = 1, b = 2; 
int d;

main()
{
	constexpr int c = a+b;
	enum foo { x = c+1 };

	printf("%d\n", x);
	return !(x == 4);
}

