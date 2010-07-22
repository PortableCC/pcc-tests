/*
 * PCC-129 
 * __builtin_offset cannot handle zero length array
 */

struct foo { 
	int a; 
	char b[0]; 
} foo; 

void bar(void) 
{ 
	__builtin_offsetof(struct foo, b); 
} 
int main() {return 0;}
