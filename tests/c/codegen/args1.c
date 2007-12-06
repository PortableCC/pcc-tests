#define va_list			char *
#define va_start(ap, last)      __builtin_stdarg_start((ap), last)
#define va_arg(ap, type)        __builtin_va_arg((ap), type)
#define va_end(ap)              __builtin_va_end((ap))
#define __va_copy(dest, src)    __builtin_va_copy((dest), (src))

int
test(int arg1, ...)
{
	va_list ap;
	int arg2;

	va_start(ap, arg1);
	arg2 = va_arg(ap, int);

	return (arg1 * arg2);
}

int
main(int argc, char *argv[])
{
	return test(10, 20);
}
