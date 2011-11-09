/* correct c99 6.5.2.5 */

char *strcpy(char *, const char *);

int main(int argc, char *argv[])
{
	char *a = "abcd"; 
	char *b = (char []) {"abcd"};
	const char *c = (const char []){"abcd"}; 
	(const char []){"abcd"} == "abcd";	// example 6
	(char []){"abcd"}[3] = 'x';		// compound literal as lvalue
	strcpy(b,"dcba"); 

	return 0; 
}
