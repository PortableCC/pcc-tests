/*
 * PCC-208
 * union attributes not being interpreted?
 */

union __attribute__((__packed__)) {
	char b[6];
	short w[3];
	long l[1];
} foo;

union {
	char b[6];
	short w[3];
	long l[1];
} __attribute__ ((__packed)) bar;


int main(int argc, char *argv[])
{

	if (sizeof(foo) != sizeof(bar))
		return 1;

	return 0;
}
