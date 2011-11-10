/* 
 * 6.26 Case ranges 
 *
 */

int main(int argc, char *argv[])
{
	char c = 'd'; 

	switch(c)
	{
		case 'A' ... 'Z':
			return 1;
		case 'a' ... 'z':
			return 0;
		default:
			return 2;
	}
	return 3; 
}
			
