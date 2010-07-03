/* correct */

int main(int *argc, char **argv)
{
	char *a = "abcd"; 
	char *b = (char []) {"abcd"};
	char *c = (const char []){"abcd"}; 
	(const char []){"abcd"} = "abcd"; // well... this should work...  
												 // 6.5.2.5
	strcpy(b,"dcba"); 

	return 0; 
}
