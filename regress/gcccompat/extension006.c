/*
 * 6.7 Conditionals with Omitted Operands
 */

int main(int argc, char *argv[])
{
	int result, x = 1, y = 2 ; 
	
	result = x < y ? : y ; 
	if (result != 1) 
		return 1;

	return 0 ;
}
