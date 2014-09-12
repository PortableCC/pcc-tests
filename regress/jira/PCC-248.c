/*
 * PCC-248
 * Compile error for modulus
 */

int a(unsigned b, unsigned c)
{
	return b % (c < 0 ? 0 : 1);
}

int main(int argc, char *argv[]) { return 0; }
