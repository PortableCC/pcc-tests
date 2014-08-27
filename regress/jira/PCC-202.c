/*
 * PCC-202
 * cpp sometimes include ^D/^E characters
 */

#define xprint(x) printf("%s\n", #x)
#define yprint(y) xprint(2+y)

int main(int argc, char *argv[])
{
	xprint(1+1);
	yprint(1+1);
	return 0;
}
