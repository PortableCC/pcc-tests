/* It seems that this is a language problem */
int main(int argc, char *argv[])
{
	int a = 1, b = 2, c; 
	int x = 2, *y = 2, z; 

	c=a+++++b ; /* a++ + ++b*/
	z=x/*y ; 
	return 0; 
}
