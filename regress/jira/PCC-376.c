/*
 * PCC-376
 * __builtin_offsetof result is not a constant
 */

struct s {
	char c;
};

enum {
	e = __builtin_offsetof(struct s, c)
};

struct s1 {
	char c1;
	char c2;
};

struct s2 {
	int i : __builtin_offsetof(struct s1, c2) ? 1 : -1;
}; 

int main(int argc, char *argv[]) { return 0; }
