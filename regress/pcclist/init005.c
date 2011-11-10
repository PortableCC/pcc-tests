/*correct*/
/* From Ted Unangst */

int a(void) { return 1; }

int main(int argc, char *argv[])
{
	int b = 0;
	a() + ++b;

	if (b == 0)
		return 1;

	return 0;
}
