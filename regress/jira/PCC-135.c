/* 
 * PCC-135
 * typeof can only handle simple terms
 */
struct a { 
	int a; 
} a; 

void 
foo(long v) 
{ 
	a.a = (typeof(a.a)) v; 
} 
int main () {return 0;}
