/* pcc-list 
 * Subject:    parse error
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 * ({ is a gcc extension. I think it's quite useful, but pcc
 * doesn't do it (yet).
 */
int p;

void
test()
{
	if ( ({volatile void *x = (void *)&p; x; }) )
		printf("help\n");
}

int main () {
	test(); 
	return 0;
}

