/* 
 * Subject:    Access of non-existent struct members
 * From:       Stefan Kempf <stefan () nefkom ! net>
 *
 */
struct foo {
	int f;
};

int
main(void)
{
	struct foo f;
	int a,b; 

	a = f.f ;
	b = f.none ;

	return 0;
}


