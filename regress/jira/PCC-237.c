/*
 * PCC-237
 * Cannot init array with wide chars
 */

typedef __WCHAR_TYPE__ wchar_t;

typedef struct {
	const wchar_t fmt[16]; /* format used to print with */
} data2;

static data2 f_fmts[] = {
	{ L"%-+ #0*.*e" }
};

int main(int argc, char *argv[]) { return 0; }
