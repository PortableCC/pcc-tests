
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct a {
    int x;
};

struct b {
    int y;
    struct a;
} p1,p2;
struct b p3 = { .y=5, .x=3 };

struct c {
    int y;
    struct a ax;
} pc1,pc2;


int main() {
	p1  = (struct b) { .y=5, .x=3 }; // this doesn't work
	if (p1.y != 5 || p1.x != 3)
		exit(1);

	p2  = (struct b) { 5, 3 };       // this works
	if (p2.y != 5 || p2.x != 3)
		exit(2);
	
	pc1  = (struct c) { .y=5, .ax.x=3 }; // this works
	if (pc1.y != 5 || pc1.ax.x != 3)
		exit(3);

	pc2  = (struct c) { 5, 3 };          // this works
	if (pc2.y != 5 || pc2.ax.x != 3)
		exit(4);

	if (p3.y != 5 || p3.x != 3)
		exit(5);
	exit(0);
}


/* output:

p1.y=3  p1.x=0  <--  wrong output
p2.y=5  p2.x=3
pc1.y=5  pc1.x=3
pc2.y=5  pc2.x=3


*/

