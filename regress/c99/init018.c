/* C99 6.7.8 */ 

int main(int argc, char *argv[])
{
	union {
		int a ;
		char b ;
		float c ;
		double d ;
	} u = { .c = 'a' };

	return 0; 
}
