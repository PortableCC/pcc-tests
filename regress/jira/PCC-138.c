/* 
 * PCC-138 
 * NetBSD/i386: major internal compiler error: struct.c, line 26
 */
struct s1 { int i; }; 

struct s1 dummy(void); 
struct s1 dummy(void) { struct s1 x1; return x1; } 

int main() { 
	struct s1 x1 = dummy(); 
return 0; } 
