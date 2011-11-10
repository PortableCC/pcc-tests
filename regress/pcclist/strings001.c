/* 
 * Subject:    pcc can't handle the double quote escape sequence
 * From:       Alt <alt () altamiranus ! info>
 */
#include <string.h>
#include <stdlib.h>

void test_func(char *s)
{
	strcpy(s, "[string \"]");
	/* comment here */
}

int main(int argc, char *argv[])
{
	char *s;
	s = malloc(2048);
	test_func(s);

	return 0;
}


