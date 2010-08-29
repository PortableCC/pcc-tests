
int main ()
{
	int *a ; 
	void *b; 


	b = (void *) a; 
	a = (int *) b;  

	return 0; 
}
