/*from Iain Hibbert , pcc segfault */

int foo(int) __attribute__ ((__const__)); /* works on gcc*/

void bar(int i)
{
	foo(i) >> 10;			 
}

int main(){
	return 0; 
}
