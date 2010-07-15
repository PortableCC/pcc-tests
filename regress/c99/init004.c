/*correct*/
typedef signed int T1; 
typedef int T2; 

struct st {
	unsigned T1:4 ;
	const T1:5 ;
	T2 r:5; 
};

T1 foo (T2 input){
	return input*2; 
}

int main(int *argc, char **argv)
{
	struct st aaa; 
	(void) foo(2); 

	return 0; 
}
