/* 
 * PCC-160 
 * compiler error: usednodes == 100, inlnodecnt 52
 *
 * resolved: 
 * struct member attributes were accidentally forgotten.
 */

#ifndef _HRESULT_DEFINED
#define _HRESULT_DEFINED
# ifdef _MSC_VER
typedef long            HRESULT;
# else
typedef int             HRESULT;
# endif
#endif

static inline HRESULT HRESULT_FROM_WIN32(unsigned int x) 
{ 
	    return (HRESULT)x > 0 ? ((HRESULT) ((x & 0x0000FFFF) | (7 << 16) | 0x80000000)) : (HRESULT)x; 
} 

int main(int argc, char *argv[])
{
	(void) HRESULT_FROM_WIN32(1);

	return 0; 
} 
