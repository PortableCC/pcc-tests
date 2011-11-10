/* C99 6.4.4.2 */ 

int main(int argc, char *argv[])
{
	float f1 ;

	double d1;
	long double d2; 

	f1 = +20.5 ;
	f1 = -20. ;
	f1 = 20.f ;
	f1 = 20.F ;
	f1 = 20. ;

	f1 = 3e4 ; 
	f1 = -3E-5 ;

	d2 = 14.11F ; 
	d2 = 14.11f ; 
	d2 = 14.00L  ; 
	d2 = 14.00l  ;

	d2 = -0xfae2 ;
	d2 = 0x1P-1 ;
	d2 = 0x.1p3 ;
	d2 = 0x1.fp3 ;
	d2 = 0x1.FFFFFEp127f ;
	d2 = 0x1.0P-1074 ; 

	return 0; 
}
