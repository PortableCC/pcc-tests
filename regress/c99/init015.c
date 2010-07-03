/* Correct - from c99 */
int main(int *argc, char **argv)
{
	enum {one, two} ; 
	const char *a[] = {
		[two] = "2222";
		[one] = "1111";
	};

	return 0; 
}
