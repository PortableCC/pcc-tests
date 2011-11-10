
int main(int argc, char *argv[])
{
	int *a ; 
	void *b; 


	b = (void *) a; 
	a = (int *) b;  

	return 0; 
}
