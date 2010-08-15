/* this should fail 
 * C99 6.5.2.3 */
struct st1 { int a ;}
struct st2 { int b ;}

int foo(struct st1 *p1, struct st2 *p2){
	p1->a = 11; 
	p2->b = 22;

	return (p1->a);
}

int main(int *argc, char *argv[]){
	union {
		struct st1 s1 ;
		struct st2 s2 ;
	}u1 ;

	/* u1 not visible in foo() */
	if ( foo( &u1.s1, &u1.s2) )
		return 1;

	return 0; 
}
