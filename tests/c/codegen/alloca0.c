#include <stdlib.h>

int
test()
{
	char *buf = alloca(65536);
	return 42;
}

main()
{
	return test();
}
