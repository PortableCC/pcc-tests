/* c99 6.9.1 */

typedef int F(void) ;

F f1,f2 ;
F f1 { return 1; } 
F f2() { return 1; }

int main ()
{
	return 0; 
}
