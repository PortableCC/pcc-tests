/* Correct */
union un1 {
	short int a ;
	int b;
	long int c; 
	float d; 
	double e; 
} u = { .b = 1 } ; 

int main(int argc, char *argv[])
{
	return 0; 
}
