/*
 * Check that
 * 	cbr L7
 * 	jbr L8
 * 	L7:
 *
 * Converts to
 * 	cbr L8
 * correctly.
 */

#if 0
#define	ERR(x,y)	printf("got %d expected %d\n", x, y)
#else
#define ERR(x,y)	if (x != y) exit(1)
#endif
#define	NUM	9

int a;
unsigned int A;

main()
{
	a = 0;
	x();
	ERR(a,NUM);

	a = NUM;
	x2();
	ERR(a,0);

	A = 0;
	X();
	ERR(A,NUM);

	A = NUM;
	X2();
	ERR(A,0);

	return 0;
}

#define F(n,c,v,cc) n() { goto b; a: c(); b: if (v cc 7) goto a; }

F(x,z,a,<=)
F(x2,z,a,>)
F(X,Z,A,<=)
F(X2,Z,A,>)

#define C(f,v) f() { v = v ? 0 : NUM; }

C(z,a)
C(Z,A)
