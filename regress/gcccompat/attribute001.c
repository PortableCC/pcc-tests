/*from Iain Hibbert , pcc segfault 
 * found in pcc-list */


int foo(int) __attribute__ ((__const__)); /* works on gcc*/

void bar(int i)
{
	foo(i) >> 10;			 
}

int main(){
	return 0; 
}

int foo(int a){
	return 0x01; 
}
