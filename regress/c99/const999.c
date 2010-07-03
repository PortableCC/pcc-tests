/*incorrect - from c99 */
struct st {
	int a ;
	const char b ;
};

int main(int *argc, char **argv)
{
	struct st s1 ; 
	const struct st s2 ; 

	s1.b = 10 ; 
	s2.a = 10 ;  

	return 0;
}
