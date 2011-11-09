
struct st {
	int a ;
	char b ;
};

int main(int argc, char *argv[])
{
	struct st s1;

	s1.a = 12; 
	(&s1)->b = 'a'; // C99 VALID
	if (s1.b != 'a')
		return 1; 

	return 0;
}
