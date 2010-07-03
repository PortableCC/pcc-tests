/* 
 * From OBSD 
 *
 * extra braces, should not cause internal compiler error 
 * */
struct a {
	int i;
} *p = { { 0 } };

int main() {return 0;}
