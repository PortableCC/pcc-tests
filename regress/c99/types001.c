/* C99 types */ 
int main(int *argc, char **argv)
{
	_Bool b;

	signed char s1; 
	short int s2 ; 
	int s3;
	long int s4 ; 
	long long int s5 ;

	unsigned char u1; 
	unsigned short int u2 ; 
	unsigned int u3;
	unsigned long int u4 ; 
	unsigned long long int u5 ;

	long long l1 ;

	float f1; 
	double f2;
	long double f3; 

	int T1[10];

	struct {
		int a; 
		float b;
		long double c;
	} st; 

	union {
		int a ;
		float b; 
		long double c;
	} un;

	const int const1 ;
	volatile int volatile1; 

	if (sizeof(signed char) != sizeof(char))
		return 1 ; 
	
	if ((sizeof(s2) != sizeof(u2)) || 
		 (sizeof(s3) != sizeof(u3)) || 
		 (sizeof(s4) != sizeof(u4)) || 
		 (sizeof(s5) != sizeof(u5)) )
		return 2 ;
	if ((sizeof(f1) >= sizeof (f2)) ||
		 (sizeof(f2) >= sizeof (f3)) )
		return 3 ;

#ifdef notdef
	/* struct member alignments are target-dependent */
	if (sizeof(st) != (sizeof(long double) + sizeof(float) + sizeof(int)))
		return 4; 
#endif
	
	if (sizeof(un) != sizeof(long double))
		return 5; 

	return 0;

}
