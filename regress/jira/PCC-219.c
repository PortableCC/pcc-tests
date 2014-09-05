/*
 * PCC-219
 * 0.0 || 1.0 gets a compiler error
 */

int main(int argc, char *argv[])
{
	int i;

  	i = 0.0 || 1.0; 
	return 0;
}
