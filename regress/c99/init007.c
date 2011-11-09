union {
	struct {
		int a1 ;
		double b1 ;
	} st1 ;
	struct {
		int a2 ; 
	} st2 ; 
} u1 ; 

int main(int argc, char *argv[])
{
	u1.st1.a1 = 10 ; 
	u1.st1.b1 = 10.5 ; 

	if (u1.st2.a2 == 10) /* valid */ 
		if (u1.st1.b1 == 10.5)
			return 0;

	return 1;
}
