/* from pcc-list, confirmed as 'pcc bug' */

int main(int *argc, char **argv)
{
	struct foo {
		int x;
	};

	struct foo myfoo;
	struct foo fooarray[10];

	fooarray[0] = myfoo;

	struct foo fooarray[]={myfoo}; /* PCC doesn't allow this */

	struct foo fooarray[]={{myfoo.x}};/* member by member, allowed by PCC*/

	return 0; 
}
