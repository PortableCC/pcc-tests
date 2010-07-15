/* 
 * when built with "-Wc,-xtemps,-xinline" causes a internal compiler error 
 *
 * http://marc.info/?t=127221369500003&r=1&w=2
 */

static inline
void foo(void *a)
{
 	__builtin_memset(a, 0, 4);
}

void bar(void *a)
{
 	foo(a);
}


int main(){
	return 0;
}

