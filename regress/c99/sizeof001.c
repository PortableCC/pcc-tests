/* c99 6.5.3.4 */

int main(int argc, char *argv[])
{
	int array[42], n;

	if (sizeof(char) != 1)
		return 1;
	if (sizeof(signed char) != 1)
		return 1;
	if (sizeof(unsigned char) != 1)
		return 1;

	if (sizeof array != ((sizeof (int)) * 42))
		return 2;
	
	n = sizeof array / sizeof array[0] ;
	if ( n != 42)
		return 3;

	return 0;
}
