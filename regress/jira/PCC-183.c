/*
 * PCC-183
 * amd64 builtin va_arg miss long double support
 */

void format(char *fmt, ...)
{
	long double ld;
	__builtin_va_list va;

	__builtin_stdarg_start(va, fmt);
	ld = __builtin_va_arg(va, long double);
	__builtin_va_end(va);

	return;
}

int main(int argc, char *argv[])
{
	return 0;
}
