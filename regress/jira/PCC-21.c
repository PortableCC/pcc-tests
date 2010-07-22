/* 
 * PCC-21
 * handling wchar arrays not complete
 */
#include <stdio.h>
#include <wchar.h>

#define _WIDE

#ifdef _WIDE
#define PRINTF wprintf
#define CHAR wchar_t
#define _T(x) L ## x
#define FMT L"%ls\n"
#else
#define PRINTF printf
#define CHAR char
#define _T(x) x
#define FMT "%s\n"
#endif


int
main(void)
{
	const CHAR *str = _T("This is the wide string");

	PRINTF(FMT, str);
	PRINTF(FMT, _T("This is the wide string"));
	PRINTF(_T("This is the wide string\n"));

	return 0;
}


