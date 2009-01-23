#include <string.h>

int
main(void)
{
	static const char msg[] = "overwrite the stack";
	char a[1];
	memcpy(a, msg, sizeof(msg)-1);
	return 0;
}
