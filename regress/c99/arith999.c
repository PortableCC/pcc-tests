/* must fail; from c99 */
int main()
{
	int i=1, a[10]; 

	i = ++i + 1 ;
	a[i++] = i;

	return 0;
}
