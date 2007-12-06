#define FLOAT float

FLOAT
test(FLOAT a, FLOAT b, FLOAT c, FLOAT d, FLOAT e,
	FLOAT f, FLOAT g, FLOAT h, FLOAT i, FLOAT j)
{
	FLOAT z = b + 3.0;
	FLOAT y = z - 3.0;
	FLOAT x = y / 3.0;
	FLOAT w = x * 3.0;
	FLOAT v = -w;

	return v;
}

int
main(int argc, char **argv)
{
	return test(1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0);
}
