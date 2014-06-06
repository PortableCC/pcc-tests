/*
 * PCC-192
 * bool wrong warning and integer promotion
 */

int main(int argc, char *argv[])
{
	_Bool b;

	b = (void *)0L;
	if (b != 0)
		return 1;

	return 0;
}
