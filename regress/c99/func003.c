struct s1 {
	int a ;
	float b ;
	double c; 
};

struct s1 foo(){
	struct s1 aaa; 

	aaa.a = 1; 
	aaa.b = 1; 
	aaa.c = 1; 

	return aaa ; 
}
union u1 {
	int a ;
	float b ;
	double c; 
};

union u1 bar(){
	union u1 bbb; 

	bbb.b = 1; 

	return bbb ; 
}

int main(int *argc, char **argv)
{
	int test1 = 0 ;
	float test2 = 0;

	test1 = foo().a ; // VALID C99
	if (test1 != 1 )
		return 1;
	test2 = bar().b ; 
	if (test2 != 1 )
		return 2;

	return 0;
}
