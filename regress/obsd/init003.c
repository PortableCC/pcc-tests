/* 
 * From OBSD 
 *
 * extra braces, should not cause internal compiler error 
 * */
struct a {
	int i;
} *p = { { 0 } };

int main(int argc, char *argv[]) { return 0; }
