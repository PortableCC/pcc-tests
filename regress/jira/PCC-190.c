/*
 * PCC-190
 * pointer to struct comparison failure (runtime)
 */

typedef struct { int i; } s_t;
s_t s[1];

int main(int argc, char *argv[])
{
	int i = 0;

	if (&s[0] != &s[i])
		return 1;

	return 0;
}
