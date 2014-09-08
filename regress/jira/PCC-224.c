/*
 * PCC-223
 * Unary + semantics done wrong
 */

static struct bit2 {
	unsigned int uibf : 7;
	signed int sibf : 7;
	/*plain*/ int pibf : 7;
} bits = { 1u, 1, 1 };

int main(int argc, char *argv[])
{

	if (sizeof(int) == sizeof(+bits.sibf)) {
	}

	return 0;
}
