/*
 * PCC-47 
 * Compiler Error... on nested structures
 *
 */
typedef struct{ 
	char a:1; 
}a_struct; 
typedef struct{ 
	a_struct b; 
}foo; 

int main(int argc, char *argv[])
{
	foo bar; 
	int i; 
	if(bar.b.a!=1){ 
		i=1; 
	} 
	return 0 ;
} 
