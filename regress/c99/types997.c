/* 
 * C99 - 6.7.2.1 
 *
 * '&' operator cannot be applied to bitfield
 *
 */
struct ST {
	unsigned int f1 :2 ;
	unsigned int f2 :5 ;
};

unsigned int *f3;

int main() 
{
	struct ST s1 ; 

	f3 = (unsigned int *) &(s1.f2) ; 

	return 0 ;
}
