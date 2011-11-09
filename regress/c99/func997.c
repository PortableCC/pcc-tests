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

int main(int argc, char *argv[])
{
	int test1 = 0 ;
	float test2 = 0;

	foo().a = 21 ; // INCORRECT
	bar().b = 60 ; // C99 -> 6.5.2.3

	return 0;
}
