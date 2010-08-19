/* C99 6.5.17 */ 
int foo(int x,int y, int z){
	return 1;
}

int main(int *argc, char **argv)
{
	int a = 1, 
		 b = 1,
		 c = 1;  

	foo(a, (b=5, b++), c);	// (b=5,b++) - one argument with val=6

	return 1; 
}
