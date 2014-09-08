/*
 * PCC-221
 * float restrict f; accepted
 */

int main(int argc, char *argv[])
{
	float restrict f; /* An invalid declaration */

	return 0;
}
