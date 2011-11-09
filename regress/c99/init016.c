/* C99 6.7.2.1  */ 
struct st {
	int a ;
	float b[];
};

int main(int argc, char *argv[])
{
	struct st s1 = { 0 }; 
	struct st s2;

	s2.a = 10 ; 

	return 0; 
}
