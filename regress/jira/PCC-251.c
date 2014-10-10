/*
 * PCC-251
 * math.h failed to compile with -D__OPTIMIZE__
 */

/* this is using a deprecated GCC method of writing initializers */

int __signbitf (float __x)
{
	union { float __f; int __i; } __u = { __f: __x };
	return __u.__i < 0;
}

int main(int argc, char *argv[]) { return 0; }
