/* C99 6.7.8 */ 

int main() 
{
	union {
		int a ;
		char b ;
		float c ;
		double d ;
	} u = { .c = 'a' };

	return 0; 
}
