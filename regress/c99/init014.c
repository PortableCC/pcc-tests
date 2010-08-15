/* C99 6.4.4.1 */ 

int main() 
{
	int i1 ;
	long int i2 ;
	long long int i3; 

	unsigned int i4;
	unsigned long int i5; 
	unsigned long long int i6; 

	i1 = 1; 
	i2 = 20L ;
	i2 = 20l ;
	i3 = 99LL ;
	i3 = 99ll ;

	i4 = 33u ;
	i4 = 33U ;
	i5 = 42ul ;
	i5 = 42UL ;
	i6 = 42ull ;
	i6 = 42ULL ;
	i6 = 42UlL ;

	i1 = 0666 ;
	i5 = 0666ul ;

	i1 = 0x01 ; 
	i2 = 0x02l ;
	i6 = 0XFfUll ; 

	i5 = 0XaFuL ; 

	return 0; 
}
