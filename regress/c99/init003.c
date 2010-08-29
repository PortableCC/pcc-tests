/* 
 * C99 6.7.8 
 *
 * arrays can be initialized to correspond to the elements of an
 * enumeration by using designators 
 *
 */
int main(int *argc, char **argv)
{
	enum {one, two} ; 
	const char *a[] = {
		[two] = "2222",
		[one] = "1111"
	};

	return 0; 
}
