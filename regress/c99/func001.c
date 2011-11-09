/* Correct - found in C99 */
int f1(){ return 1; }
int f2(){ return 5; }
int f3(){ return 5; }
int f4(){ return 5; }

void p1(int input) { exit(1); }
void p2(int input) { 
	if (input == 15)
		exit (0); 
}

int main(int argc, char *argv[])
{
	void (*p2f[5])(int);
	p2f[0] = p1 ;
	p2f[1] = p2 ;
	p2f[2] = p1 ;
	p2f[3] = p1 ;
	p2f[4] = p1 ;
	
	(*p2f[ f1() ])( f2() + f3() + f4() ); 
	/* p2f[1]( 5 + 5 + 5) */

	return 2; 
}
