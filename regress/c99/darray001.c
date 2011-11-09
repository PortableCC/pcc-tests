/* Array declarations may have a '*' between the square brackets (used
 * for variable arrays in parameter lists). 
 */
int main(int argc, char *argv[])
{
	int array[*] = {1, 1, 1} ;

	return 0; 
}
