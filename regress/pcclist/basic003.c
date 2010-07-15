/* Subject:    offsetof(type, array) causes "compiler error: usednodes
 * == 4, inlnodecnt 0"
 * From:       "KAMADA Ken'ichi" <kamada () nanohz ! org>
 */

#include <stddef.h>
struct s {
	int i;
	int a[1];
};
char buf[offsetof(struct s, a[1])];

int main(){return 0;}
