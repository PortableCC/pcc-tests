/* 
 * Subject:    Fwd: user/5590: PCC bitfield value signedness (and 32bit
 * 				field overshifting)
 * From:       "Dries Schellekens" <schellekens.dries () gmail ! com>
 *
 * correct values: 
 * x = 1 2 3 4 -3 6
 * y = 3 8 9
 * x = 1 2 3 0 0 6
 * y = 2 8 16
 * p->a = 0x3, p->b = 0xf
 */

struct foo {
	int a;
	char b;
	int x : 12, y : 4, : 0, : 4, z : 3;
	char c;
} x = { 1, 2, 3, 4, 5, 6 };
int i = 16;
struct baz { unsigned int a:2, b:4, c:32;} y = { 7, 8, 9};

int main(int argc, char *argv[])
{
	//printf("x = %d %d %d %d %d %d\n", x.a, x.b, x.x, x.y, x.z, x.c);
	if (  x.a != 1 || 
			x.b != 2 ||
			x.x != 3 ||
			x.y != 4 ||
			x.z != -3 ||
			x.c != 6 )
		return 1; 

	//printf("y = %d %d %d\n", y.a, y.b, y.c);
	if (  y.a != 3 ||
			y.b != 8 ||
			y.c != 9 )
		return 2; 

	x.y = i;
	x.z = 070;
	//printf("x = %d %d %d %d %d %d\n", x.a, x.b, x.x, x.y, x.z, x.c);
	if (  x.a != 1 ||
			x.b != 2 ||
			x.x != 3 ||
			x.y != 0 ||
			x.z != 0 ||
			x.c != 6 )
		return 3; 

	y.a = 2;
	y.c = i;
	//printf("y = %d %d %d\n", y.a, y.b, y.c);
	if (  y.a != 2 ||
			y.b != 8 ||
			y.c != 16 )
		return 4; 

	f2(&x);
	return 0;
}

f1(struct baz *p) {
	p->a = p->b = 0;
	if (p->b)
		printf("p->b != 0!\n");
	p->a = 0x3; p->b = 0xf;
	//printf("p->a = 0x%x, p->b = 0x%x\n", p->a, p->b);
	if (  p->a != 0x3 ||
			p->b != 0xf)
		exit (5); 
}
f2(struct baz *p) {
	p->a = (i==0);
	p->b = (f1(p),0);
}
