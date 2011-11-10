/* C99 6.5.7 
 * pointer arithmetic 
 * */ 

int main(int argc, char *argv[])
{
	int a = 5 ,b = 5;
	int arr[a][b];
	int (*p)[b] = arr;// p == &a[0]
	p += 1 ;				// p == &a[1]
	(*p)[2] = 99; 		// arr[1][2] = 99
	a = p - arr; 		// a == 1

	if (arr[1][2] != 99)
		return 1; 
	if (a != 1)
		return 2; 

	return 0; 
}
