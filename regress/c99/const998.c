/* incorrect */

int main(int argc, char *argv[])
{
	char *a ; 
	const char **b ;

	b = &a ; // const volation 

	return 0; 
}
