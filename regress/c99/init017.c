/* c99 6.7.8 */

int main() 
{
	int a[15] = { 0,1,2,3,4, [10] = 10,11,12,13,14 } ; // zeros in middle 
	int b[6] = { 0,1,2,3, [2] = 22,33,44,55 } ; // overrriding first values

	if (a[6] !=0 )
		return 1;

	if (b[2] != 22 )
		return 2; 

	return 0; 
}
