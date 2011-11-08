/*
 * C99 section 6.5 note 2
 *
 * multiple modifications between sequence points is undefined behaviour,
 * meaning both these statements should fail
 */

int main(int argc, char *argv[])
{
	int i=1, a[10];

	i = ++i + 1;
	a[i++] = i;

	return 0;
}
