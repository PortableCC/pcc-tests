/*
 * Date: Sat, 19 Sep 2015 17:54:56
 * From: Nicolas Joly
 * Subject: [Pcc] compiler error: classifystruct: failed classify
 */

struct one {
	int val;
};

struct two {
	struct one one;
	char none[8];
};

void sample(struct two arg)
{
}

int main(int argc, char *argv[]) { return 0; }
