/* Correct */
int foo(int n){
	char a[n]; /* variable length array */

	return sizeof(a);
}

int main(int *argc, char **argv)
{

	if (foo(10) != 10)
		return 1;

	return 0; 
}
