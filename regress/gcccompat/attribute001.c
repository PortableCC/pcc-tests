/*from Iain Hibbert , pcc segfault 
 * found in pcc-list */

int foo(int) __attribute__ ((__const__)); /* works on gcc*/

void bar(int i)
{
	foo(i) >> 10;			 
}

int foo(int a)
{
	return 0x01; 
}

int main(int argc, char *argv[]) { return 0; }
