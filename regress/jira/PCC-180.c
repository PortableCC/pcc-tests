/*
 * PCC-180
 * compiler error: ninval: init node not constant
 */

typedef union {
	double d;
	unsigned int i[2];
} xdouble;

int main(int argc, char *argv[])
{
	static xdouble nan = { 0.0 / 0.0 };

    	nan.d = 0.0 / 0.0;

	return 0;
}
