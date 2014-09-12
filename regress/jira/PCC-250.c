/*
 * PCC-250
 * compiler error: usednodes == 59927, inlnodecnt 59916
 */

void __inline__ foo(void)
{
	foo();
}

int main(int argc, char *argv[]) { return 0; }
