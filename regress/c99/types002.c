/* type specifiers may occur in any order */ 
int main(int argc, char *argv[])
{
	unsigned long long int u1 ;
	unsigned int long long u2 ;
	int long long unsigned u3 ;

	const _Complex double long c1 ;
	const _Complex long double c2 ;
	double const  long _Complex c3 ;
	const double long _Complex c4 ;
	double long const _Complex c5 ;

	return 0;

}
