/* C99 use truncation towards 0 */
int main(int *argc,char **argv)
{
   int a = -22 / 7 ;
	int b = -22 % 7 ;

	if (a != -3 )
		return 1; 
		
	if (b != -1 )
		return 2; 

	return 0;
}
