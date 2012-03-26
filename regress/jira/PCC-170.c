/*
 * PCC-170
 * unhandled struct_declarator attribute warning on nested structures attribute
 */

struct {
	struct {
		int a;
	} a __attribute__((__aligned__(16)));
} a; 

int main(int argc, char *argv[]) { return 0; }
