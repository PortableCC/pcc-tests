/* incorrect - from C99  */ 
int foo(int x,int y, int z){
	return 1;
}

int main(int *argc, char **argv)
{
	int a = 1, 
		 b = 1,
		 c = 1;  

	foo(a, b=5, b++ , c);// comma is not allowed here
			       			// C99 

	return 1; 
}
