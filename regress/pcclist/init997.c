/* 
 * Subject:    Access of non-existent struct members
 * From:       Stefan Kempf <stefan () nefkom ! net>
 *
 */
struct foo {
	int f;
};

int main(int argc, char *argv[])
{
	struct foo f;
	int a,b; 

	a = f.f ;
	b = f.none ;

	return 0;
}


